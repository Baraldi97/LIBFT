/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:00:44 by marvin            #+#    #+#             */
/*   Updated: 2025/09/08 16:00:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	print_char(int c)
{
	return write(1, &c, 1);
}

int	print_str(char *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		print_char((int)*s); //Por que aqui tenho int antes do meu ponteiro para string?
		count ++; //Aqui é para ir incrementando o numero de bytes
		s ++; //Aqui é para percorrer a string e poder ir incrementando mais
	}
	return count;
}

int	print_digit(long	n, int	base, char *base_chars)
{
	int		count;

	if (n < 0) //Tratando o caso de numeros negativos.
	{
		write(1, "-", 1);
		count = 1;
		n = -n;
	}
	else if (n < base) //Aqui, caso o numero seja menor que a base, eu só imprimo ele, utilizando meu array hexad, porque não preciso fazer conversão.
	{
		return print_char(base_chars[n]);
	}
	else//Aqui fazemos a conversão dos numeros não negativos e maiores que a base, de acordo com a sua base. Para isso utilizamos recursão (preciso entender como essa recursão acontece aqui dentro)
	{
		count =  print_digit(n / base, base, base_chars);
		count =  print_digit(n % base, base, base_chars);
	}
	return count;
}

// Com essa função, vou fazer a identificação da letra c, d, s, x, X... e aplica a função para já converter o que precisa ser convertido. 
int	print_format(char type, va_list args) //Aqui eu preciso entender melhor o por quê do va_list args
{
	//Aqui a mesma coisa, entender o por quê usei o args dentro de va_arg.
	//E entender um pouco melhor o Type Promotion, sei que por causa dele eu emprego int.// Mas não entendo 100% o por quê
	int	count;
	char *hex_lower = "0123456789abcdef";
	char *hex_upper = "0123456789ABCDEF";
	
	count = 0;
	if (type == 'c')
		count += print_char(va_arg(args, int)); //Relembrar aqui, por quê +=
	else if (type == 's')
		count += print_str(va_arg(args, char *));
	else if (type == 'd')
		count += print_digit((long)va_arg(args, int), 10, "0123456789"); //Usei o print digit para o meu int e hexadecimal, preciso entender melhor o porquê do cast explicito para long aqui e no hexadecimal também
	else if (type == 'i')
		count += print_digit((long)va_arg(args, int), 10, "0123456789");
	else if (type == 'u')
		count += print_digit((long)va_arg(args, int), 10, "0123456789");
	else if (type == 'x')
		count += print_digit((long)va_arg(args, unsigned int), 16, hex_lower); // o Unsigned aqui está sendo usado, porque no printf original, o numero hexadecimal não é aparece como esperamos para negativos! (PReciso entender um pouco melhor isso também)
	else if (type == 'X')
		count += print_digit((long)va_arg(args, unsigned int), 16, hex_upper);
	else if (type == '%')
		count += print_char('%');
	else
		write(1, "type", 1);
	return (count);
}


int	ft_printf(const char *format, ...)
{
    va_list	args;
	int	count;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), args);
		else
			write(1, format, 1);
		++format;		
	}
	va_end(args);
	return (count);
}

int	main()
{
	char *word;

	word = "Ro";
	ft_printf("My name is %s, I'm %d years old, my age in Hexadeximal is %x, in %% CAPITAL is %X\n", word, 42, 42, 42);
	printf("My name is %s, I'm %d years old, my age in Hexadeximal is %x, in %% CAPITAL is %X\n", word, 42, 42, 42);
	return (0);
}