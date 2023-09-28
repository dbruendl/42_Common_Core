/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:39:05 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/14 18:15:56 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* looks for the last occurance of the character c in s
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	cha;

	i = ft_strlen(s);
	str = (char *) s + i;
	cha = (char) c;
	while (i--)
	{
		if (*str == cha)
			return (str);
		str--;
	}
	if (*str != cha)
		return (NULL);
	return (str);
}
