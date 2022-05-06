/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:41:30 by mhaksal           #+#    #+#             */
/*   Updated: 2022/04/29 14:10:17 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract_ol.h"

int	mandelbrot(t_vars *ptr)
{
	int		n;
	double	x;
	double	y;
	double	x2;
	double	y2;

	n = 0;
	x = 0;
	y = 0;
	x2 = 0;
	y2 = 0;
	while (x2 + y2 <= 4 && n < MAXITER)
	{
		y = 2 * x * y + ptr->f->cy;
		x = x2 - y2 + ptr->f->cx;
		x2 = x * x;
		y2 = y * y;
		n++;
	}
	return (n);
}
