#include "fractol.h"
void	handle_pixel(int x, int y, t_fractal *fractal)
{
	t_complex	z;
	t_complex	c;

	z.x = 0;
	z.y = 0;

	c.x = map(x, -2, +2, 0, WIDTH);
	c.y = map(y, +2, -2, 0, HEIGHT);

	while (!!!)
	{
		z = sum_complex(square_complex(z), c);
		if ()
		{
			my_pixel_put();
			return;
		}
	}
	

}

void	fractal_render(t_fractal *fractal)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 800)
	{
		x = -1;
		while (++x < 800)
		{
			handle_pixel(x, y, fractal);
		}
		y++;
	}
}