/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <smaksiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:23:22 by smaksiss          #+#    #+#             */
/*   Updated: 2025/01/14 11:01:44 by smaksiss         ###   ########.fr       */
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
#define BLACK 0x000000
#define WHITE 0xFFFFFF
#define RED 0xFF0000
#define GREEN 0x00FF00
#define BLUE 0x0000FF
#define ELECTRIC_PINK    0xFF00FF  // RGB(255, 0, 255)
#define NEON_GREEN       0x39FF14  // RGB(57, 255, 20)
#define CYBER_YELLOW     0xFFFF00  // RGB(255, 255, 0)
#define VIBRANT_BLUE     0x1D4ED8  // RGB(29, 78, 216)
#define MAGNETIC_PURPLE  0x9B59B6  // RGB(155, 89, 182)
#define LIME_GREEN       0x32CD32  // RGB(50, 205, 50)
#define HOT_PINK         0xFF69B4  // RGB(255, 105, 180)
#define ELECTRIC_BLUE    0x7DF9FF  // RGB(125, 249, 255)
#define RADIANT_ORANGE   0xFF5E00  // RGB(255, 94, 0)
#define TURQUOISE        0x40E0D0  // RGB(64, 224, 208)
#define BRIGHT_MAGENTA   0xFF00CC  // RGB(255, 0, 204)
#define ULTRA_VIOLET     0x6A0DAD  // RGB(106, 13, 173)


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
	void	*mlx_window;	// mlx_init()
	t_img	img;
	double	escape_zone;
	int		iteration;
	
}	t_fractal;

typedef	struct s_complex
{
	int	x;
	int	y;
}	t_complex;

void		ft_putstr_fd(char *s, int fd);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		fractal_init(t_fractal *fractal);
double    map(int pixel, double min, double max, int dimension);
t_complex	sum_complex(t_complex z1, t_complex z2);
t_complex	square_complex(t_complex z);
void	fractal_render(t_fractal *fractal);

#endif