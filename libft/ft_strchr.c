/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:00:38 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/06 15:00:38 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char )c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     char    name[8] = "Rodrigo";
//     char    *result;

//     printf("Name is: %s\n", name);
//     result = ft_strchr(name, 'd');
//     printf("Substring is: %s \n", result);
//     printf("The first occurence is: %c\n", *result);
//     return (0);
// }