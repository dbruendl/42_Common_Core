/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:23:42 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/15 16:44:56 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* copys the num Bytes from src to dest
*/

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	while (i < num)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
