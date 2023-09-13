/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:52:07 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/11 16:52:10 by dbrundl          ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	size_t	slen;
	char	*str;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = 0;
	while ((slen > start) && (i < len))
}
