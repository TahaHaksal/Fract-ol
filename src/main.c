/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:38:48 by mhaksal           #+#    #+#             */
/*   Updated: 2022/04/29 15:27:54 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract_ol.h"

void	put_image_on_window(t_vars *hodl)
{
	int	x;
	int	y;
	int	n;

	x = 0;
	while (x < WIDTH)
	{
		y = 0;
		while (y < HEIGHT)
		{
			hodl->f->cx = map(x, WIDTH, hodl->f->px_min, hodl->f->px_max);
			hodl->f->cy = map(y, HEIGHT, hodl->f->py_min, hodl->f->py_max);
			n = hodl->f->fractal_func(hodl);
			my_mlx_pixel_put(hodl->img, x, y, hodl->f->c.coloring_func(n));
			y++;
		}
		x++;
	}
	mlx_put_image_to_window(hodl->mlx, hodl->window, hodl->img->img, 0, 0);
}

int	close_exit(t_vars *vars)
{
	if (vars)
	{
		mlx_destroy_window(vars->mlx, vars->window);
		free(vars->f);
	}
	else
	{
		printf("Usage: ./fract-ol [set-name]\nset-names are as follows:\n");
		printf("\nmandelbrot");
		printf("\nmandelbar");
		printf("\njulia1");
		printf("\njulia2");
		printf("\njulia3");
		printf("\nburningship\n");
	}
	exit(0);
	return (1);
}

int	check_args(char *ptr)
{
	if (!ft_strncmp(ptr, "mandelbar", 9) || !ft_strncmp(ptr, "mandelbrot", 10))
		return (1);
	else if (!ft_strncmp(ptr, "julia1", 6) || !ft_strncmp(ptr, "julia2", 6))
		return (1);
	else if (!ft_strncmp(ptr, "julia3", 6))
		return (1);
	else if (!ft_strncmp(ptr, "burningship", 11))
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	t_vars		hodl;
	t_data		im;
	t_fractals	*f;
	int			len;

	if (ac != 2 || !check_args(av[1]))
		close_exit(NULL);
	hodl.mlx = mlx_init();
	hodl.window = mlx_new_window(hodl.mlx, WIDTH, HEIGHT, "Hello world!");
	im.img = mlx_new_image(hodl.mlx, WIDTH, HEIGHT);
	im.addr = mlx_get_data_addr(im.img, &im.bits_per_pixel, &len, &im.endian);
	im.line_length = len;
	hodl.img = &im;
	f = new_element(av[1]);
	f->c = t_deneme();
	hodl.f = f;
	mlx_hook(hodl.window, 2, 1L << 0, keyhandler, &hodl);
	mlx_hook(hodl.window, 17, 0, close_exit, &hodl);
	mlx_mouse_hook(hodl.window, mouse_handler, &hodl);
	put_image_on_window(&hodl);
	mlx_loop(hodl.mlx);
}
