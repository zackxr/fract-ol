/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <smaksiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:23:22 by smaksiss          #+#    #+#             */
/*   Updated: 2025/01/09 20:27:57 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRACTOL_H
#define		FRACTOL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include "mlx/mlx.h"

#define	ERROR_MSG	"Please enter :\n \"./fractol mandelbrot\" or \n\"./fractol julia <val_1> <val_2>\""
#define WIDTH 800
#define HEIGHT 800


//pixels buffer from mlx
typedef	struct	s_img
{
	void	*img_ptr; //pointer to image
	char	*pixel_ptr; //pointer to pixels
	int		byte_to_pixel;// number of bytes of each pixel
	int		line_len;
	int		endian;
}	t_img;

typedef	struct s_fractal
{
	char	*name;
	void	*mlx_connection;
	void	*mlx_window;	//mlx_init()
	t_img	img;
	
}	t_fractal;

typedef	struct s_complex
{
	int	x;
	int	y;
}	t_complex;

void	ft_putstr_fd(char *s, int fd);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	fractal_init(t_fractal *fractal);
double map(double unscaled_num, double new_min, double new_max, double old_min, double old_max); 

#endif