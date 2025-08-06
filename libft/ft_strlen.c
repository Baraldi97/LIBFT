/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:01:20 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/06 15:01:20 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%d", ft_strlen("Rodrigo"));
//     return (0);
// }
