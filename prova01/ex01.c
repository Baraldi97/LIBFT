/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:26:34 by rcosta            #+#    #+#             */
/*   Updated: 2025/11/11 17:03:48 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}
int	main(void)
{
	int 	i;
	i = 1;
	while (i <= 100)
		{
			if (i % 3 == 0 && i % 5 == 0)
				write(1, &"fizzbuzz", 8);
			else if ((i % 3) == 0)
				write(1, &"fizz", 4);
			else if ((i % 5) == 0)
				write(1, &"buzz", 4);
			else
				ft_putnbr(i);
			i++;
			write(1, &"\n", 1);
		}
}