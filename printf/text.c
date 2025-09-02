/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:53:19 by rcosta            #+#    #+#             */
/*   Updated: 2025/09/02 19:58:51 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	max(int num_args, ...);

int	main(void)
{
	max(4, 10, 12, 14, 16);
	return (0);
}

int	max(int num_args, ...)
{
	int	i;
	int	x;
	va_list	args;

	va_start(args, num_args);
	i = 0;
	while (i < num_args)
	{
		x = va_arg(args, int);
		i++;
		printf("x: %d\n", x);
	}
	va_end(args);
	return (0);
}
