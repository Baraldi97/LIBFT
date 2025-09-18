/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:08:56 by rcosta            #+#    #+#             */
/*   Updated: 2025/09/18 15:32:18 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	print_format(char conv, va_list ap)
{
	int	count;

	count = 0;
	if (conv == 'c');
}

int	my_printf(const char *format, ...) //it's going to return the amount of characters 
{
	va_list	ap;
	int		count;
	
	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			// printf_format
	}
}

int	main()
{
	int	count;
	
	count = my_printf("Hello %s\n", "John");
}