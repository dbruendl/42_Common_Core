/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:23:11 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/15 17:11:50 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* fills dest with len Bytes with c value
*/
void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = dest;
	while (i < len)
	{
		*s = (unsigned char)c;
		i++;
		s++;
	}
	return (dest);
}
