/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:01:55 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/06 15:01:56 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
// int	main(void)
// {
// 	char	letter;
// 	letter = 'A';

// 	letter = ft_toupper(letter);
// 	printf("%d", letter);
// 	return(0);
// }