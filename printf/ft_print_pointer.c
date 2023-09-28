/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:40:59 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/28 17:53:23 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_pointer(void *p)
{
    int             i;
    unsigned long   adr;

    adr = (unsigned long) p;
	if(adr == 0)
        return(write(1,"(nil)",6));
    i = ft_write("0x") + ft_write(ft_itoa_base(adr,HEX));
    return i;
}