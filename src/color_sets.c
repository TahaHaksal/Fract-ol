/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_sets.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:37:22 by mhaksal           #+#    #+#             */
/*   Updated: 2022/05/06 11:39:43 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract_ol.h"

t_colors	t_deneme(void)
{
	static int		i;
	static t_colors	new;

	i++;
	if (i % 3 == 1)
	{
		new.coloring_func = killua;
		return (new);
	}
	else if (i % 3 == 2)
	{
		new.coloring_func = bursaspor;
		return (new);
	}
	else
	{
		new.coloring_func = gassaray;
		return (new);
	}
	return (new);
}
