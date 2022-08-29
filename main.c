//test
#include "ft_printf.h"

int	main(void)
{
	char name[6] = "Rika";
	int	year = 23;

	ft_printf("Hello, %s!\nYou are %i years old\n", name, year);
	return 0;
}