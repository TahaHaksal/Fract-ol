/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_elements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:23:02 by mhaksal           #+#    #+#             */
/*   Updated: 2022/04/29 14:10:11 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract_ol.h"

void	new_element2(t_fractals *ptr, char *str)
{
	ptr->fractal_func = julia;
	if (!ft_strncmp("julia2", str, 6))
	{
		ptr->offsetx = -0.4;
		ptr->offsety = 0.6;
	}
	else if (!ft_strncmp("julia3", str, 6))
	{
		ptr->offsetx = 0.285;
		ptr->offsety = 0.01;
	}
	else if (!ft_strncmp("mandelbar", str, 9))
		ptr->fractal_func = mandelbar;
}

t_fractals	*new_element(char *ptr)
{
	t_fractals	*new;

	new = malloc(sizeof(t_fractals));
	new->px_max = 2;
	new->px_min = -2;
	new->py_max = 2;
	new->py_min = -2;
	if (!ft_strncmp("mandelbrot", ptr, 10))
		new->fractal_func = mandelbrot;
	else if (!ft_strncmp("julia1", ptr, 6))
	{
		new->fractal_func = julia;
		new->offsetx = -0.835;
		new->offsety = -0.232;
	}
	else if (!ft_strncmp("burningship", ptr, 11))
		new->fractal_func = burningship;
	else
		new_element2(new, ptr);
	return (new);
}
