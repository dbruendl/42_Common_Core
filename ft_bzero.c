/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:23:23 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/07 15:13:49 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//resets a String to the size of n, and fills everything with a 0
void	ft_bzero(void *s, size_t n)
{
	char	*reset;

	reset = s;
	while (n)
	{
		*reset = 0;
		reset++;
		n--;
	}
}
