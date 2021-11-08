#include "ft_printf.h"

void ft_putnbr(int nb, int *len)
{
	int modu;

	modu = 0;
	if (nb < 0)
	{
		ft_putchar('-', len);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + 48, len);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
		modu = nb % 10;
		ft_putchar(modu + 48, len);
	}
}
