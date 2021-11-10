#include "include/ft_printf.h"

int main(void)
{
	char str[] = "mi Leo";
	int len;
	int len_p;
	int x;
	int h;
	int i;
	int *ptr;

	ptr = &x;	
	x = 42;
	h = 987;
	i = 7;
	//len = ft_printf("%p, HOla %s, Tu NO %d, Hexa Mayus %X, Hexa Minux %x, %%\n", ptr, str, i, h, h);
	//printf("Len Mi_PrintF = %d\n", len);
	//len_p = printf("%p, HOla %s, Tu NO %d, Hexa Mayus %X, Hexa Minux %x, %%\n", ptr, str, i, h, h);
	//printf("Len PrintF Origi = %d\n", len_p);
	ft_printf("Numero %d en binario %b y en hexa %x\n", x, x, x);
	return (0);
}

