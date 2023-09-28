/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:57:38 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/28 18:46:54 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_write(char *c, int f)
{
    int i;

    i = 0;
    if(c == NULL)
        return(write(1,"(null)",6));
    else
        while(c[i])
            i = i + ft_putchar_fd(c[i],1);
    if(f == 0)
        free (c);
    return (i);
}