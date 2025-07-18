/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:22:51 by rcosta            #+#    #+#             */
/*   Updated: 2025/07/14 15:54:19 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb >= 1)
	{
		resultado = resultado * nb;
		nb --;
	}
	return (resultado);
}

// #include <stdio.h>

// int ft_iterative_factorial(int nb);

// int main(void)
// {
//     int nb;
//     int resultado_do_fatorial; 

//     nb = 4;

//     resultado_do_fatorial = ft_iterative_factorial(nb);

//     printf("O fatorial de %d é: %d", nb, resultado_do_fatorial);

//     return(0);
// }