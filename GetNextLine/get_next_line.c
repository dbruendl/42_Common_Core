/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:14:46 by dbrundl           #+#    #+#             */
/*   Updated: 2023/10/05 16:14:46 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_new_rest_str(char *rest_str)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (rest_str[i] && rest_str[i] != '\n')
		i++;
	if (!rest_str[i])
	{
		free (rest_str);
		return (NULL);
	}
	str = (char *) malloc (sizeof(char) * (ft_strlen(rest_str) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (rest_str[i])
		str[j++] = rest_str[i++];
	str[j] = '\0';
	free (rest_str);
	return (str);
}

static char	*ft_get_line(char *rest_str)
{
	int		i;
	char	*str;

	if (!rest_str)
		return (NULL);
	i = 0;
	while (rest_str[i] && rest_str[i] != '\n')
		i++;
	if (rest_str[i] == '\n')
		i++;
	str = (char *) malloc(sizeof(char) * i + 1);
	if (!str)
		return (free (str), NULL);
	i = 0;
	while (rest_str[i] && rest_str[i] != '\n')
	{
		str[i] = rest_str[i];
		i++;
	}
	if (rest_str[i] == '\n')
	{
		str[i] = rest_str[i];
		i++;
	}
	return (str[i] = '\0', str);
}

static char	*ft_read_rest_str(int fd, char *rest_str)
{
	char	*buf;
	int		rd_bytes;

	buf = (char *) malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
	{
		if (!rest_str)
			free (rest_str);
		return (NULL);
	}
	rd_bytes = 1;
	while (rd_bytes > 0)
	{
		rd_bytes = read(fd, buf, BUFFER_SIZE);
		if (rd_bytes < 0)
			return (free (buf), free (rest_str), NULL);
		buf[rd_bytes] = '\0';
		rest_str = ft_strjoin(rest_str, buf);
		if (ft_strchr(rest_str, '\n'))
			break ;
	}
	free (buf);
	return (rest_str);
}

char	*get_next_line(int fd)
{
	static char		*rest_str;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	rest_str = ft_read_rest_str(fd, rest_str);
	if (!rest_str)
		return (NULL);
	line = ft_get_line(rest_str);
	rest_str = ft_new_rest_str(rest_str);
	return (line);
}
