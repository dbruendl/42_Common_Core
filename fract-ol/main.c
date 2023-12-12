/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:59:26 by dbrundl           #+#    #+#             */
/*   Updated: 2023/12/12 20:01:15 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int main (int ac, char **av)
{
    t_fractal   fractal;
    if(ac == 2 && !ft_strncmp(av[1], "mandelbrot", 10)
        || ac == 4 && !ft_strncmp(av[1], "julia", 5))
    {
        fractal.name = av[1];
        fractal_init(&fractal);
        fractal_render(&fractal);
        mlx_loop(fractal.mlx_connection);
    }
    else
    {
        ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
        exit(EXIT_FAILURE);
    }
}