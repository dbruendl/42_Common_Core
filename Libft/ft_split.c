/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:52:49 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/15 12:49:11 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*Allocates (with malloc(3)) and returns an array
*of strings obtained by splitting ’s’ using the
*character ’c’ as a delimiter. The array must end
*with a NULL pointer.
*/

static size_t	count_words(char const *s, char c)
{
	size_t	j;

	if (!s || !*s)
		return (0);
	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			j++;
		while (*s != c && *s)
			s++;
	}
	return (j);
}

static size_t	wordlen(const char *s, char c)
{
	size_t	ret;

	if (!ft_strchr(s, c))
		ret = ft_strlen(s);
	else
		ret = ft_strchr(s, c) - s;
	return (ret);
}

static void	*clean(char **strs, int i)
{
	while (i > 0)
	{
		free(strs[i]);
		i--;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t		count;
	int			i;
	char		**sum;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	sum = (char **)malloc(sizeof(char *) * (count + 1));
	if (!sum)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		count = wordlen(s, c);
		sum[i] = ft_substr(s, 0, count);
		if (!sum[i++])
			return (clean(sum, --i));
		s += count;
	}
	sum[i] = NULL;
	return (sum);
}
