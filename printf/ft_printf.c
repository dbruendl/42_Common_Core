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
            if(check_references(format[i + 1],ap))
                i = i + 2;
            else
                ft_putchar_fd(format[i],1);
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
        ft_putchar_fd(va_arg(ap,int),1);
    else if(c == 's')
        ft_putstr_fd(va_arg(ap,char *),1);
    else if(c == 'p')
        va_arg(ap,unsigned long)
    else if(c == 'd' || c == 'i')
        ft_putstr_fd(ft_itoa(va_arg(ap,int)),1);
    else if(c == 'u')
        ft_putstr_fd(ft_itoa(va_arg(ap,unsigned int)),1);
    else if(c == 'x')
        va_arg(ap,unsigned int)
    else if(c == 'X')
        va_arg(ap,unsigned int)
    else if(c == '%')
        ft_putchar_fd(c,1);
    if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
        return (1);
    else
        return (0);
}
