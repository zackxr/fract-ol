/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <smaksiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:23:24 by smaksiss          #+#    #+#             */
/*   Updated: 2025/01/09 09:29:00 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int main(int ac, char **ag)
{
	t_fractal	fractal;

	
	if ((ac == 2 && !ft_strncmp(ag[1], "mandelbrot", 10))
		|| (4 == ac && !ft_strncmp(ag[1], "julia", 5)))
	{
		fractal.name = ag[1];
		fractal_init(&fractal);
		// fractal_render(&fractal);
		mlx_loop(fractal.mlx_window);
	}
	else
	{
		ft_putstr_fd(ERROR_MSG, 2);
		exit(EXIT_FAILURE);
	}

}