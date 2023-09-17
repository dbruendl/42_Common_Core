/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:26:19 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/07 15:16:13 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
*  checks if the character is uppercaser and makes it lowercase
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
