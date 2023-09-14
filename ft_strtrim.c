/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:52:38 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/11 16:52:41 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int checkstr(char s1, char const *s2)
{
	size_t i;
	
	i = 0;
	while(i <= ft_strlen(s2))
	{
		if(s1 == s2[i])
		{
			return (1);	
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t	 	j;
	size_t		len;
	char		*s;
	
	if (!s1 || !set)
		return(NULL);
	if (!*s1)
		return (ft_strdup(""));
	i = 0;
	while (checkstr(s1[i], set))
		i++;
	len = ft_strlen(s1);
	j = 0;
	while (len > 0 && checkstr(s1[len], set))
		len--;
	s = (char *) malloc (sizeof(char *) * (len - i) + 1);
	if(!s)
		return(NULL);
	len = len - i;
	while(j <= len)
	{
		s[j++] = s1[i++];
	}
	s[j] = '\0';
	return (s);
}
