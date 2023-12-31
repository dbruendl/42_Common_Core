/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:24:35 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/18 16:54:39 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Appends the src to the dest depending 
* on the size and ends with a null terminator
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			dlen;
	size_t			slen;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] && i < (size - dlen - 1))
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dest[dlen + i] = '\0';
	return (dlen + slen);
}
