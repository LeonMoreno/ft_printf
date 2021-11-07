#include "ft_printf.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putchar(char c, int *len)
{
	*len += write(1, &c, 1);
}

void ft_putstr(char *str, int *len)
{
	*len += write(1, str, ft_strlen(str));
}
