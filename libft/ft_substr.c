/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:34:44 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/13 21:06:55 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(len +1);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[i + (unsigned int)start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// int	main(void)
// {
// 	char	*name;
// 	name = ft_substr("Rodrigo", 2, 3);
// 	printf("%s", name);
// 	return (0);
// }
