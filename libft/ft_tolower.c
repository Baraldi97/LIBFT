/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:01:55 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/13 15:39:29 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
// int	main(void)
// {
// 	char	letter;
// 	letter = 'R';

// 	letter = ft_tolower(letter);
// 	printf("%d", letter);
// 	return(0);
// }
