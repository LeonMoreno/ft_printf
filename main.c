#include "include/ft_printf.h"

int main(void)
{
	char str[] = "mi Leo";
	int len;
	int len_p;
	int x;
	int h;
	int i;
	
	x = 8;
	h = 987;
	i = 7;
	len = ft_printf("hello how are you 567   ! & * %d %s\n", x, str);
	len_p = printf("hello how are you 567   ! & * %d %s\n", x, str);
	printf("Len = %d\n", len);
	printf("Len = %d\n", len_p);
	return (0);
}

