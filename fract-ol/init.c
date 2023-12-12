/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:12:13 by dbrundl           #+#    #+#             */
/*   Updated: 2023/12/12 20:06:21 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void malloc_error(void)
{
    perror("Problems with malloc");
    exit(EXIT_FAILURE);
}

void    data_init(t_fractal *fractal)
{
    fractal->escape_value = 4;
    fractal->iterations_definition = 42;
}
void    fractal_init(t_fractal *fractal)
{
    fractal->mlx_connection = mlx_init();
    if(fractal->mlx_connection == NULL)
        malloc_error();
    fractal->mlx_window = mlx_new_window(fractal->mlx_connection, WIDTH, HEIGHT, fractal->name);
    if(fractal->mlx_window == NULL)
    {
        mlx_destroy_display(fractal->mlx_connection);
        free(fractal->mlx_connection);
        malloc_error();
    }
    fractal->img.img_ptr = mlx_new_image(fractal->mlx_connection, WIDTH, HEIGHT);

    if(fractal->img.img_ptr == NULL)
    {
        mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
        mlx_destroy_display(fractal->mlx_connection);
        free(fractal->mlx_connection);
        malloc_error();
    }
    fractal->img.pixels_ptr = mlx_get_data_addr(fractal->img.img_ptr,
                                                &fractal->img.bpp,
                                                &fractal->img.line_len,
                                                &fractal->img.endian);
    data_init(fractal);
}