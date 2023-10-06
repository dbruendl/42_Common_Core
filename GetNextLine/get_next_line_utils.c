/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:15:06 by dbrundl           #+#    #+#             */
/*   Updated: 2023/10/05 16:15:06 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sum;
	char	*s;
	char	*pos1;

	if (!s1 || !s2)
		return (NULL);
	sum = ft_strlen(s1) + ft_strlen(s2);
	s = (char *) malloc(sizeof(char) * (sum + 1));
	if (!s)
		return (NULL);
	pos1 = s;
	while (*s1)
		*s++ = *s1++;
	while (*s2)
		*s++ = *s2++;
	*s = '\0';
	free(s);
	return (pos1);
}

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

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*res;

	res = malloc(elsize * nelem);
	if (!res)
		return (NULL);
	ft_bzero(res, elsize * nelem);
	return (res);
}

size_t	ft_strlen(const char *theString)
{
	int	i;

	i = 0;
	while (theString[i])
		i++;
	return (i);
}
