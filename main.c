#include "include/ft_printf.h"

int main(void)
{
	char str[] = "Leo";
	int len;

	len = ft_printf("HOla %s como %s\n", str, "estas?");
	printf("Len = %d\n", len);
	return (0);
}

