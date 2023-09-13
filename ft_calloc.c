/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:27:55 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/07 16:19:00 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*p;
	size_t	i;

	p = malloc(nelem * elsize);
	i = 0;
	if (p != NULL)
	{
		while (i < (nelem * elsize))
		{
			p = 0;
			i++;
		}
	}
	return (p);
}
