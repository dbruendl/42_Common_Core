/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:55:05 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/11 16:55:07 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_posnbr(int nb, int fd)
{
	char	new_nb;

	if (nb < 10)
	{
		new_nb = nb + 48;
		write(fd, &new_nb, 1);
	}
	else
	{
		ft_posnbr(nb / 10, fd);
		new_nb = (nb % 10) + 48;
		write(fd, &new_nb, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		n = (n / 10) * -1;
		write(fd, "-", 1);
		ft_posnbr(n, fd);
		write(fd, "8", 1);
	}
	else if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
		ft_posnbr(n, fd);
	}
	else
		ft_posnbr(n, fd);
}
