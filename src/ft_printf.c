#include "ft_printf.h"

void ft_checkarg(char c, va_list argva, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(argva, int), len);
	if (c == 's')
		ft_putstr(va_arg(argva, char *), len);
	if (c == 'i')
		ft_putnbr(va_arg(argva, int), len);
	if (c == 'd')
		ft_putnbr(va_arg(argva, int), len);
	if (c == 'X')
		ft_puthexa_mayus(va_arg(argva, unsigned int), len);
}

int ft_printf(const char *format, ...)
{
	char *str;
	va_list argva;
	int len;

	len = 0;
	va_start(argva, format);
	str = (char *)format;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_checkarg(*str, argva, &len);
		}
		else
			ft_putchar(*str, &len);
		str++;
	}
	return (len);
}

