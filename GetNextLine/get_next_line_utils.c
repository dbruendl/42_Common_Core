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

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	sum;
	char	*s;
	int		i;
	int		j;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	sum = ft_strlen(s1) + ft_strlen(s2);
	s = malloc(sizeof(char) * (sum + 1));
	if (!s)
		return (NULL);
	while (s1[++i])
		s[i] = s1[i];
	j = 0;
	while (s2[j])
		s[i++] = s2[j++];
	s[i] = '\0';
	return (free (s1), s);
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

size_t	ft_strlen(const char *str)
{
	int	length;

	length = 0;
	while (str [length])
		length++;
	return (length);
}

char	*ft_strdup(const char *s)
{
	char	*c;
	int		i;

	i = 0;
	while (s[i])
		i++;
	c = (char *)malloc(sizeof(char) * i + 1);
	if (!c)
		return (NULL);
	ft_strlcpy(c, s, i + 1);
	return (c);
}

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	int				l;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if (size > 0)
	{
		while (src[i] && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (l);
}
