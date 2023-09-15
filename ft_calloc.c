/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:27:55 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/15 14:46:03 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* reserves space for an Array of Elements and fills them
* with zeros
*/

static size_t	checkoverlfow(size_t nelem, size_t elsize)
{
	if ((elsize * nelem) / nelem != elsize)
		return (1);
	else
		return (0);
}

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*a;
	size_t	sum;

	a = NULL;
	if (nelem != 0 && checkoverlfow(nelem, elsize))
		return (NULL);
	sum = nelem * elsize;
	a = (void *) malloc(sum);
	if (a)
		ft_bzero(a, sum);
	return (a);
}
