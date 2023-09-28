/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:23:23 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/15 13:55:36 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//resets a String to the size of n, and fills everything with a 0

void	ft_bzero(void *s, size_t n)
{
	char		*reset;
	size_t		i;

	i = 0;
	reset = s;
	while (i < n)
	{
		reset[i] = 0;
		i++;
	}
}
