/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:00:13 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/06 15:00:13 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*var1;
	unsigned char		*var2;
	int					result;
	size_t				i;

	var1 = (unsigned char *)s1;
	var2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (var1[i] != var2[i])
		{
			result = var1[i] - var2[i];
			return (result);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	int		test;

// 	str1 = "Rodrigo";
// 	str2 = "Rodrigo";
// 	test = ft_memcmp(str1, str2, 8);
// 	printf("%d\n", test);
// 	return (0);
// }