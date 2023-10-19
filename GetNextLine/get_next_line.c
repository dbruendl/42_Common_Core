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

static char	*ft_new_str(char *str)
{
	int		i;
	int		j;
	char	*new_str;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	if (!str[i])
		return (free (str), NULL);
	new_str = (char *) malloc (sizeof(char) * (ft_strlen(str) - i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (str[i])
		new_str[j++] = str[i++];
	str[j] = '\0';
	free (str);
	return (new_str);
}

static char	*ft_get_line(char *str)
{
	int		i;
	char	*new_str;

	if (!str || !*str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	new_str = (char *) malloc(sizeof(char) * i + 1);
	if (!new_str)
		return (free (str), NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		new_str[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str[i] = '\0', new_str);
}

static char	*ft_read_str(int fd, char *str)
{
	char	*buf;
	int		rd_bytes;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(str, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buf, BUFFER_SIZE);
		if (rd_bytes == -1)
			return (free (buf), free (str), NULL);
		buf[rd_bytes] = '\0';
		str = ft_strjoin(str, buf);
	}
	free (buf);
	return (str);
}

char	*get_next_line(int fd)
{
	static char		*str;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (!str)
		str = ft_strdup("");
	str = ft_read_str(fd, str);
	if (!str)
		return (free(str), NULL);
	line = ft_get_line(str);
	str = ft_new_str(str);
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
	i = 6;
	fd = open("empty.txt", O_RDONLY);
	while (i)
	{
		gnl = get_next_line(fd);
 		printf("{%s}\n", gnl);
 		free(gnl);
 		i--;
 	}
 	close(fd);
}*/