/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:53:02 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/18 16:20:14 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a string
*representing the integer received as an argument.
*Negative numbers must be handled.
*/

static size_t	nbrlen(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}

char	*ft_itoa(int n)
{
	char	*arr;
	size_t	len;

	len = nbrlen(n) + 1;
	arr = (char *)malloc(sizeof (char) * (len));
	if (!arr)
		return (NULL);
	len--;
	arr[len] = '\0';
	if (n == 0)
	{
		len--;
		arr[len] = '0';
	}
	while (n)
	{
		len--;
		arr[len] = ft_abs(n % 10) + '0';
		n = n / 10;
	}
	if (len--)
		arr[len] = '-';
	return (arr);
}
