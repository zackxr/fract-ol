#include "../fractol.h"

int main(void)
{
	t_fractal	*fractal;
	int i = 0;
	int j = 0;

	fractal->mlx_window = mlx_init();
	fractal->mlx_connection= mlx_new_window(fractal->mlx_window, HEIGHT, WIDTH, "hllo");
	fractal->img.img_ptr = mlx_new_image(fractal->mlx_window, HEIGHT, WIDTH);
	// fractal->img.pixel_ptr = mlx_get_data_addr(&img.img_ptr, &img.byte_to_pixel, &img.line_len, &img.endian);
	while (i < HEIGHT)
	{
		j = 0;
		while (j < WIDTH)
			mlx_pixel_put(fractal->mlx_window, fractal->mlx_connection, j++, i, 0Xeebbff);
			// mlx_pixel_put(fractal->mlx_window, fractal->mlx_connection, i * fractal->img.line_len, j * (fractal->imj / 8), 0Xd580ff);
		i++;
	}
	mlx_loop(fractal->mlx_window);
	// mlx_put_image_to_window(fractal->mlx_connection, fractal->mlx_window, fractal->img.img_ptr, 0, 0);
	return 0;
}
// #include "mlx.h"

// int main()
// {
//     void *mlx;
//     void *window;

//     mlx = mlx_init();
//     window = mlx_new_window(mlx, 800, 600, "Fractal Test");

//     // Drawing a pixel
//     mlx_pixel_put(mlx, window, 5, 5, 0xFFFFFF);

//     mlx_loop(mlx);
//     return 0;
// }
