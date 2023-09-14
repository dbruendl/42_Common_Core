/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:53:02 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/11 16:53:04 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/
#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	int		c;
	char	*str;

	j = n;
	i = 0;
	c = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	str = malloc(i+1);
	if (!str)
		return (NULL);
	if (j < 0)
	{
		str[c] = '-';
		j *= -1;
		i--;
	}
	str[i+1] = '\0';
	while (j)
	{
		str[i--] = (j % 10) + '0';
		j = j / 10;
	}
	return (str);
}
