#include <stdio.h>

int	potencia(int base, int expo)
{
	if (expo == 0)
		return (1);
	else
	{
		return base * potencia(base, expo - 1);
	}
}

int	main(void)
{
	int	test;
	int	base;
	int	expo;

	base = 3;
	expo = 2;
	test = printf("O número %d, elevado a %d é igual a %d.\n",base, expo, potencia(base, expo));
	return (0);
}