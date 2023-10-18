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
		return (free (rest_str), NULL);
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

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(rest_str, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buf, BUFFER_SIZE);
		if (rd_bytes == -1)
			return (free (buf), free (rest_str), NULL);
		buf[rd_bytes] = '\0';
		rest_str = ft_strjoin(rest_str, buf);
	}
	free (buf);
	return (rest_str);
}

char	*get_next_line(int fd)
{
	static char		*rest_str;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (!rest_str)
		rest_str = ft_strdup("");
	rest_str = ft_read_rest_str(fd, rest_str);
	if (!rest_str)
		return (free(rest_str), NULL);
	line = ft_get_line(rest_str);
	rest_str = ft_new_rest_str(rest_str);
	return (line);
}
/*
#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	int	i;
	int fd;
	char *gnl;
	
	i = 4;
	fd = open("empty.txt", O_RDONLY);
	while (i)
	{
		gnl = get_next_line(fd);
		printf("{%s}", gnl);
		free(gnl);
		i--;
	}
	close(fd);
}*/