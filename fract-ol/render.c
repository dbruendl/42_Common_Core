/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:34:40 by dbrundl           #+#    #+#             */
/*   Updated: 2023/12/12 20:04:20 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void my_pixel_put(int x, int y, t_img *img, int color)
{
    int offset;
    
    offset = (y * img->line_len) + (x * (img->bpp / 8));
    *(unsigned int *)(img ->pixels_ptr + offset) = color;
}

/*
* Mandelbrot
* z = z² + c
*/
static void handle_pixel(int x, int y, t_fractal *fractal)
{
    t_complex   z;
    t_complex   c;
    int         i;
    int         color;

    i = 0;
    z.x = 0.0;
    z.y = 0.0;
    
    c.x = map(x,-2,+2, WIDTH);
    c.y = map(x,+2,-2, HEIGHT);

    while(i < fractal->iterations_definition)
    {
        z = sum_complex(square_complex(z), c);
        
        if((z.x * z.x) + (z.y * z.y) > fractal->escape_value)
        {
            color = map(i, BLACK, WHITE, fractal->iterations_definition);
            my_pixel_put(x, y, &fractal->img, color);
            return ;
        }
        ++i;
    }
    my_pixel_put(x,y,&fractal->img, PSY_PURPLE);
}

void fractal_render(t_fractal *fractal)
{
    int x;
    int y;
    
    y = -1;
    while(++y < HEIGHT)
    {
        x = -1;
        while(++x < WIDTH)
        {
            handle_pixel(x, y, fractal);
        }
    }
    mlx_put_image_to_window(fractal->mlx_connection,
                            fractal->mlx_window,
                            fractal->img.img_ptr,
                            0, 0);
}