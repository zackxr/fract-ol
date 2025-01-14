#include "fractol.h"

static void	malloc_error(void)
{
	perror("malloc problem detected!");
	exit(EXIT_FAILURE);
}

void	data_init(t_fractal *fractal)
{
	fractal->escape_zone = 4;
	fractal->iteration = 42;
}

void	fractal_init(t_fractal *fractal)
{
	fractal->mlx_connection = mlx_init();

	if (!fractal->mlx_connection)
		malloc_error();
	fractal->mlx_window = mlx_new_window(fractal->mlx_connection, WIDTH, HEIGHT, fractal->name);
	fractal->img.img_ptr = mlx_new_image(fractal->mlx_connection, WIDTH, HEIGHT);
	if (!fractal->img.img_ptr)
	{
		mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
		mlx_destroy_image(fractal->mlx_connection, fractal->img.img_ptr);
		free(fractal->mlx_connection);
		malloc_error();
	}
	fractal->img.pixel_ptr = mlx_get_data_addr(fractal->img.img_ptr, &fractal->img.byte_to_pixel, 
				&fractal->img.line_len, &fractal->img.endian);
	data_init(fractal);
}