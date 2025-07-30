/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:16:45 by marvin            #+#    #+#             */
/*   Updated: 2025/07/22 21:16:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// int	main(void)
// {
// 	char	name[8] = "Rodrigo";
// 	char	new[8] = "";

// 	printf("Before function: this is the var 'name': %s and this is the var 'new': %s\n", name, new);
// 	ft_memcpy(new, name, 8);
// 	printf("After Function: this is the var 'name': %s and this is the var 'new': %s\n", name, new);
// 	return (0);
// }
