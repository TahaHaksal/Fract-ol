/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:19:29 by mhaksal           #+#    #+#             */
/*   Updated: 2022/04/29 14:10:15 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract_ol.h"

double	map(double value, double from_high, double to_low, double to_high)
{
	double	a;
	double	b;

	a = to_high - to_low;
	b = from_high;
	return (to_low + (a * (value / b)));
}
