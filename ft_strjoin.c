/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:52:21 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/11 16:52:26 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	sum;
	char	*s;
	
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	sum = ft_strlen(s1) + ft_strlen(s2);
	s = (char *) malloc(sizeof(char) * (sum + 1));
	if (!s)
		return (NULL);
	while(i++ < ft_strlen(s1))
		s[i] = s1[i];
	while(i < sum)
		s[i++] = s2[j++];
	s[i] = '\0';
	return(s);
}
