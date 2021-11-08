#include "include/ft_printf.h"

int main(void)
{
	char str[] = "Leo";
	int len;
	int x;
	
	x = -798;
	len = ft_printf("HOla %s como %i\n", str, x);
	printf("Len = %d\n", len);
	return (0);
}

