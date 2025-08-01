/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:28:13 by rcosta            #+#    #+#             */
/*   Updated: 2025/07/31 20:32:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
// int	main(void)
// {
// 	char	letter;
// 	letter = 'r';

// 	letter = ft_toupper(letter);
// 	printf("%d", letter);
// 	return(0);
// }