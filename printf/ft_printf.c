/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:21:04 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/28 12:04:53 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check_references(char c, va_list ap)
{
    int i;

    i = 0;
    if(c == 'c')
        i = ft_putchar_fd(va_arg(ap,int),1);
    else if(c == 's')
        i = ft_write(va_arg(ap, char *));
    else if(c == 'p')
        i = ft_print_pointer(va_arg(ap,void *));
    else if(c == 'd' || c == 'i')
        i = ft_write(ft_itoa(va_arg(ap,int)));
    else if(c == 'u')
        i = ft_write(ft_itoa(va_arg(ap,unsigned int)));
    else if(c == 'x')
        i = ft_print_hex(va_arg(ap,unsigned int),c);
    else if(c == 'X')
        i = ft_print_hex(va_arg(ap,unsigned int),c);
    else if(c == '%')
        i = ft_putchar_fd(c,1);
    else
        i = 2;
    return (i);
}

int ft_printf(const char *format, ...)
{
    int i;
    int j;
    int c;
    const char	*str;
    va_list ap;
    va_start(ap,format);

   i = 0;
   c = 0;
   str = ft_strdup(format);
	if (!str)
		return (0);
   while(str[i])
   {
        if(str[i] == '%')
        {
            j = check_references(str[i + 1],ap);
            if(j == 2)
            {
                ft_putchar_fd(str[i++],1);
                ft_putchar_fd(str[i++],1);
            }
            else
            {
                c++;
                i = i + j +1;
            }
        }
        else
            i = i + ft_putchar_fd(str[i],1);
   }
   va_end(ap);
   return(i-c);
}
