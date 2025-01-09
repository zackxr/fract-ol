#include "fractol.h"

static void	malloc_error(void)
{
	perror("malloc problem detected!");
	exit(EXIT_FAILURE);
}

void	fractal_init(t_fractal *fractal)
{
	fractal->mlx_window = mlx_init();

	if (fractal->mlx_window == NULL)
	{
		mlx_clear_window(fractal->mlx_window);
		free(fractal->mlx_window);
		malloc_error();
	}
	fractal->img.img_ptr = mlx_new_image(fractal->mlx_window, WIDTH, HEIGHT);
	if (!fractal->img.img_ptr)
	{
		mlx_close_window(fractal->mlx_window);
		mlx_delete_image(fractal->mlx_window, fractal->img.img_ptr);
		free(fractal->mlx_window);
		malloc_error();
	}
	fractal->img.pixel_ptr = mlx_image_to_window(fractal->mlx_window, fractal->img.img_ptr, WIDTH, HEIGHT); 
}