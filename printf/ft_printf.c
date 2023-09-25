/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:21:04 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/21 18:43:29 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
   int  i;
   va_list ap;
   va_start(ap,format);

   i = 0;
   while(format[i])
   {
        if(format[i] == '%')
            if(check_references(format[i + 1],ap) == 0)
            {
                ft_putchar_fd(format[i],1);
                i = i + 2;
            }
        else
            ft_putchar_fd(format[i],1);
        i++;
   }
   va_stop(ap);
   return(i);
}

int check_references(char c, va_list ap)
{
    if(c == 'c')
    {
        ft_putchar_fd(va_arg(ap,int),1);
        return(1);
    }
    else if(c == 's')
        return(ft_write(va_arg(ap,int)));
    else if(c == 'p')
        return(ft_print_pointer(va_arg(ap,unsigned long)));
    else if(c == 'd' || c == 'i')
        return(ft_write(ft_itoa(va_arg(ap,int))));
    else if(c == 'u')
        return(ft_write(ft_itoa(va_arg(ap,unsigned int))));
    else if(c == 'x')
        return(ft_print_hex(va_arg(ap,unsigned int),c));
    else if(c == 'X')
        return(ft_print_hex(va_arg(ap,unsigned int),c));
    else if(c == '%')
    {
        ft_putchar_fd(c,1);
        return(1);
    }
    else
    {
        return (0);
    }
}
