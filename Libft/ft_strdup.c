/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:28:06 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/07 15:07:24 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* copys the given string and allocates the right memory for the s
*/

char	*ft_strdup(const char *s)
{
	char	*c;
	int		len;

	len = ft_strlen(s) + 1;
	c = (char *)malloc(sizeof(char) * len);
	if (!c)
		return (NULL);
	ft_strlcpy(c, s, len);
	return (c);
}
