/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:27:19 by mhaksal           #+#    #+#             */
/*   Updated: 2022/04/29 15:27:20 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract_ol.h"

int	keyhandler(int keycode, t_vars *vars)
{
	if (keycode == 53)
		close_exit(vars);
	if (keycode == 124)
		set_fractal_x(vars, vars->f->px_min + 0.05, vars->f->px_max + 0.05);
	if (keycode == 123)
		set_fractal_x(vars, vars->f->px_min - 0.05, vars->f->px_max - 0.05);
	if (keycode == 125)
		set_fractal_y(vars, vars->f->py_min + 0.05, vars->f->py_max + 0.05);
	if (keycode == 126)
		set_fractal_y(vars, vars->f->py_min - 0.05, vars->f->py_max - 0.05);
	if (keycode == 8)
		vars->f->c = t_deneme();
	put_image_on_window(vars);
	return (0);
}

int	mouse_handler(int keycode, int x, int y, t_vars *vars)
{
	double	mapped_x;
	double	mapped_y;

	if (keycode == 5)
	{
		mapped_x = map(x, WIDTH, vars->f->px_min, vars->f->px_max);
		mapped_y = map(y, HEIGHT, vars->f->py_min, vars->f->py_max);
		vars->f->px_min = mapped_x + ((vars->f->px_min - mapped_x) * 1.0 / 1.2);
		vars->f->px_max = mapped_x + ((vars->f->px_max - mapped_x) * 1.0 / 1.2);
		vars->f->py_min = mapped_y + ((vars->f->py_min - mapped_y) * 1.0 / 1.2);
		vars->f->py_max = mapped_y + ((vars->f->py_max - mapped_y) * 1.0 / 1.2);
		put_image_on_window(vars);
	}
	if (keycode == 4)
	{
		mapped_x = map(x, WIDTH, vars->f->px_min, vars->f->px_max);
		mapped_y = map(y, HEIGHT, vars->f->py_min, vars->f->py_max);
		vars->f->px_min = mapped_x + ((vars->f->px_min - mapped_x) * 1.0 / 0.8);
		vars->f->px_max = mapped_x + ((vars->f->px_max - mapped_x) * 1.0 / 0.8);
		vars->f->py_min = mapped_y + ((vars->f->py_min - mapped_y) * 1.0 / 0.8);
		vars->f->py_max = mapped_y + ((vars->f->py_max - mapped_y) * 1.0 / 0.8);
		put_image_on_window(vars);
	}
	return (0);
}
