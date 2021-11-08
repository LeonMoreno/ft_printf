#include "ft_printf.h"

void ft_puthexa_mayus(unsigned int nb, int *len)
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
	if (nb > 10 && nb < 16)
		ft_putchar(nb + 55, len);
	if (nb >= 16)
	{
		ft_puthexa_mayus (nb / 16, len);
		modu = nb % 16;
		if (modu < 10)
			ft_putchar(modu + 48, len);
		if (modu > 10 && modu < 16)
			ft_putchar(modu + 55, len);
	}
}


