/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:54:34 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/15 12:56:15 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*Outputs the string ’s’ to the given file descriptor
*followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s,fd);
	write(fd, "\n", 1);
}
