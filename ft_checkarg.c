#include "ft_printf.h"

void ft_checkarg(char c, va_list argva)
{
	unsigned i;
	char *s;

	if (c == 'd')
	{
		i = va_arg(argva, int);
		ft_putchar(i);
	}
	else if	(c == 'i')	
		ft_putchar(va_arg(argva, int));
	else if	(c == 's')	
		ft_putstr(va_arg(argva, char *));
}
