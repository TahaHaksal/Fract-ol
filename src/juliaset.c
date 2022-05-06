/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   juliaset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:41:37 by mhaksal           #+#    #+#             */
/*   Updated: 2022/04/29 14:10:18 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract_ol.h"

int	julia(t_vars *ptr)
{
	double	temp;
	double	cx;
	double	cy;
	int		n;

	cx = ptr->f->cx;
	cy = ptr->f->cy;
	n = 0;
	while (cx * cx + cy * cy <= 4 && n < MAXITER)
	{
		temp = cx * cx - cy * cy;
		cy = 2 * cx * cy + ptr->f->offsety;
		cx = temp + ptr->f->offsetx;
		n++;
	}
	return (n);
}
