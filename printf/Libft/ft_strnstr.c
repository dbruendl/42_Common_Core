/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:27:31 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/18 16:54:19 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* looks for the first occurence from little in 
* big based on the maximum number of len
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llen;

	llen = ft_strlen(little);
	if (!llen)
		return ((char *)(big));
	while (*big && llen <= len)
	{
		if (ft_strncmp(big, little, llen) == 0)
			return ((char *)(big));
		big++;
		len--;
	}
	return (NULL);
}
