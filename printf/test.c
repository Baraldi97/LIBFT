


int	ft_printf(const char *format, ...);

#include <stdio.h>

int	main(void)
{
	char	*name;
	int		age;
	
	age = 28;
	name = "Rodrigo";
	
	printf("Eu sou o %s, tenho %d anos de idade\n", name, age);

	return(0);
}