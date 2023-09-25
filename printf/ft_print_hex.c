/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:28:50 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/25 16:28:50 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int num, char form)
{
	int i;

    i = 0;
    if (num == 0)
    {
		ft_putchar_fd("0",1);
        return (1);
    }
    else
    {
        if(form == "x")
		    i = ft_write(itoa_base(num,HEX));
        else
            i = i = ft_write(itoa_base(num,HEX2));
    }
    return (i);
}