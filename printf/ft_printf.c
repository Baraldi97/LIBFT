/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:47:08 by rcosta            #+#    #+#             */
/*   Updated: 2025/10/06 12:18:50 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += print_format(*format, args);
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	int	x;

	x = 42;
	ft_printf("%p My name is %s, I'm %d years old, I'm %icm. My age in Hexadeximal is %x, %% and in CAPITAL is %X\n", &x, "Ro", 28, 168, 28, 28);
	printf("%p My name is %s, I'm %d years old, I'm %icm. My age in Hexadeximal is %x, %% and in CAPITAL is %X\n", &x, "Ro", 28, 168, 28, 28);
	return (0);
}
