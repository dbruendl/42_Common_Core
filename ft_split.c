/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:52:49 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/11 16:52:51 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 1;
	while(s[i])
	{
		if(s[i] == c)
		{
			j++;
		}
		i++;
	}
	return (j);
}

char *strndup(const char *src, size_t n) {
    char *dup = malloc(n + 1);
    if (dup) {
        ft_memcpy(dup, src, n);
        dup[n] = '\0';
    }
    return dup;
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		i;
	char	**sum;
	const char	*start;
	
	if (!s)
		return (NULL);
	count = count_words(s, c);
	sum = (char **)(sizeof(char *) * count + 1);
	if (!sum)
		return (NULL);
	i = 0;
	while(*s)
	{
		if(*s != c)
		{
			start = s;
			while(*s && *s != c)
				s++;
			sum[i] = strndup(start, s - start);
			if(!sum[i])
			{
				while(i > 0)
					free(sum[--i]);
				free(sum);
				return (NULL);
			}
			i++;
		}
		else
			s++;
	}
	sum[i] = NULL;
	return sum;
}
