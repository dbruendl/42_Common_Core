/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:27:41 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/07 15:10:36 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	while ((*nptr && *nptr == ' ') || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	sign = 1;
	if ((*nptr == '+') || (*nptr == '-'))
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	num = 0;
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		num = (num * 10) + (*nptr - '0');
		nptr++;
	}
	return (num * sign);
}
