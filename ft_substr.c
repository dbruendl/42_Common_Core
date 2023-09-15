/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:52:07 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/14 16:54:29 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*Allocates (with malloc(3)) and returns a substring
*from the string ’s’.
*The substring begins at index ’start’ and is of
*maximum size ’len’.
*
*s: The string from which to create the substring.
*start: The start index of the substring in the
*string ’s’.
*len: The maximum length of the substring.
*/
#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (s[i] && i < n)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		slen;
	char		*str;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen > start)
		len = ft_strnlen(&s[start], len);
	else
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
