/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:53:57 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/28 10:46:09 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*Outputs the character ’c’ to the given file
*descriptor.
*/

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return(1);
}
