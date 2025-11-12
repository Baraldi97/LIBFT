/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:15:01 by rcosta            #+#    #+#             */
/*   Updated: 2025/11/12 16:26:31 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);*/

void	ft_swap(int *a, int *b)
{
	int	*temp;

	temp = *a;
	b = *a;
	a = *b;
}

#include <stdio.h>

int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 10;
	nbr2 = 30;
	printf ("Esse é esse é o nbr1:%d, e esse é o nbr2:%d\n", nbr1, nbr2);
	ft_swap (nbr1, nbr2);
	printf ("Agora esse é o nbr1:%d, e esse é o nbr2:%d\n", nbr1, nbr2);
	return (0);
}
