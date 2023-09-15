/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:52:38 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/15 09:51:59 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a copy of
*’s1’ with the characters specified in ’set’ removed
*from the beginning and the end of the string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, 0, len));
}
