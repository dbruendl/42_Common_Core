/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:26:36 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/14 17:14:54 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  returns a pointer to the first occurence of c in s
*/

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	cha;

	str = (char *) s;
	cha = (char) c;
	while (*str)
	{
		if (*str == cha)
			return (str);
		str++;
	}
	if (*str != cha)
		return (NULL);
	return ((char *)str);
}
