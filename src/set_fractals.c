/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_fractals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:19:58 by mhaksal           #+#    #+#             */
/*   Updated: 2022/04/29 14:10:29 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract_ol.h"

void	set_fractal_x(t_vars *ptr, double x_min, double x_max)
{
	ptr->f->px_min = x_min;
	ptr->f->px_max = x_max;
}

void	set_fractal_y(t_vars *ptr, double y_min, double y_max)
{
	ptr->f->py_min = y_min;
	ptr->f->py_max = y_max;
}

void	set2(t_vars *ptr, double Cx, double Cy)
{
	ptr->f->cx = Cx;
	ptr->f->cy = Cy;
}
