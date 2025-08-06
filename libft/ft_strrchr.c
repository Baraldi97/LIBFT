/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:01:48 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/06 15:01:48 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char )c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int main(void)
// {
//     char    name[8] = "Baraldi";
//     char    *result;

//     printf("Name is:%s\n", name);
//     result = ft_strrchr(name, 'a');
//     printf("Name is:%s\n", result);
//     return (0);
// }