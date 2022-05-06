/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:23:13 by mhaksal           #+#    #+#             */
/*   Updated: 2022/04/29 15:26:24 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract_ol.h"

int	killua(int n)
{
	int	color;

	if (n <= 50)
	{
		color = map(n, 50, 0, 255);
		return (get_trgb(0, 0, 0, color));
	}
	else
	{
		color = map(n - 50, 50, 0, 255);
		return (get_trgb(0, color, color, 255));
	}
}

int	gassaray(int n)
{
	int	color;

	if (n <= 33)
	{
		color = map(n, 33, 0, 255);
		return (get_trgb(0, color, 0, 0));
	}
	if (n <= 66)
	{
		color = map(n - 33, 33, 0, 255);
		return (get_trgb(0, 255, color, 0));
	}
	else
	{
		color = map(n - 66, 33, 0, 255);
		return (get_trgb(0, 255, 255, color));
	}
}

int	bursaspor(int n)
{
	int	color;

	if (n <= 50)
	{
		color = map(n, 50, 0, 255);
		return (get_trgb(0, 255 - color, 255, 255 - color));
	}
	else
	{
		color = map(n - 50, 50, 0, 255);
		return (get_trgb(0, 0, 255 - color, 0));
	}
}

int	get_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}
