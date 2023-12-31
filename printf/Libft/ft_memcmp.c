/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:27:17 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/15 16:42:11 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* compares the first n Bytes of both s1 and s2 
* and returns the comparision
*/

int	ft_memcmp(const void *set1, const void *set2, size_t n)
{
	size_t				i;
	const unsigned char	*s1;
	const unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *) set1;
	s2 = (unsigned char *) set2;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] + s2[i]);
		i++;
	}
	return (0);
}
