#include "ft_printf.h"

void ft_putnbr(int nb, int *len)
{
	int res;

	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-', len);
	}
	if (nb < 10)
		ft_putchar(nb + 48, len);
	if (nb > 9)
	{
		ft_putnbr(nb / 10, len);
		res = (nb % 10) + 48;
		ft_putchar (res, len);
	}
}

void ft_putnbr_u(int nb, int *len)
{
	unsigned int res;

	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-', len);
	}
	if (nb < 10)
		ft_putchar(nb + 48, len);
	if (nb > 9)
	{
		ft_putnbr(nb / 10, len);
		res = (nb % 10) + 48;
		ft_putchar (res, len);
	}
}
