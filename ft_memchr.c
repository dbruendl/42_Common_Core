/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:27:06 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/15 16:00:42 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  checks if the value is in the ptr based on the max size of num
*/

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char	*s;
	size_t				i;

	i = 0;
	s = ptr;
	while (i < num)
	{
		if (s[i] == (unsigned char)value)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
