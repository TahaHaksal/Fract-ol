/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_ol.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:52:47 by mhaksal           #+#    #+#             */
/*   Updated: 2022/05/06 11:38:35 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACT_OL_H
# define FRACT_OL_H

# include "../mlx/mlx.h"
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# define MAXITER 100
# define HEIGHT 1000
# define WIDTH 1000

typedef struct s_vars	t_vars;

typedef struct s_colors
{
	int	(*coloring_func)(int);
}				t_colors;

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct s_fractals
{
	double		px_min;
	double		px_max;
	double		py_min;
	double		py_max;
	double		cx;
	double		cy;
	double		offsetx;
	double		offsety;
	int			(*fractal_func)(struct s_vars *);
	t_colors	c;
}				t_fractals;

typedef struct s_vars
{
	void		*mlx;
	void		*window;
	t_data		*img;
	t_fractals	*f;
}				t_vars;

t_fractals	*new_element(char *ptr);

int			mandelbar(t_vars *ptr);
int			mandelbrot(t_vars *ptr);
int			julia(t_vars *hodl);
int			burningship(t_vars *ptr);

int			keyhandler(int keycode, t_vars *vars);
int			mouse_handler(int keycode, int x, int y, t_vars *vars);

double		map(double value, double from_high, double to_low, double to_high);

void		my_mlx_pixel_put(t_data *data, int x, int y, int color);
int			close_exit(t_vars *vars);
void		put_image_on_window(t_vars *hodl);

int			get_trgb(int t, int r, int g, int b);
int			killua(int n);
int			gassaray(int n);
t_colors	t_deneme(void);
int			bursaspor(int n);

int			ft_strncmp(const char *s1, const char *s2, unsigned int n);

void		set_fractal_x(t_vars *ptr, double x_min, double x_max);
void		set_fractal_y(t_vars *ptr, double y_min, double y_max);
void		set2(t_vars *ptr, double Cx, double Cy);

#endif
