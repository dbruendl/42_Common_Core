/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:52:21 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/15 12:52:58 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*Allocates (with malloc(3)) and returns a new
*string, which is the result of the concatenation
*of ’s1’ and ’s2’.
*/

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
	return (pos1);
}
