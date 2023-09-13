/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:24:01 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/07 16:21:53 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (d == s)
		return (dest);
	if (s < d && d < (s + n))
	{
		while (n-- > 0)
			d[i - 1] = s[i - 1];
	}
	else
	{
		while (i++ < n)
			d[i] = s[i];
	}
	return (dest);
}
