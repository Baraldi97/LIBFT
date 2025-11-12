/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:04:48 by rcosta            #+#    #+#             */
/*   Updated: 2025/11/11 17:13:30 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);*/

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *s)
{
	while(*s)
	{
		write(1, s, 1);
		s++;
	}
}

int main(void)
{
    char *test = "Hello, World!";
    ft_putstr(test);
    return (0);
}
