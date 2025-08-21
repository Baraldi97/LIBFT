/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:03:57 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/20 19:17:58 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s)
{
	void	*ptr;
	size_t	s_size;
	size_t	i;
	char	*ns;

	i = 0;
	s_size = ft_strlen(s);
	ptr = malloc(s_size + 1);
	if (!ptr)
		return (NULL);
	ns = (char *)ptr;
	while (s[i] != '\0')
	{
		ns[i] = s[i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
// int	main(void)
// {
// 	char	*s1;
// 	char	*test;

// 	s1 = "Rodrigo";
// 	test = ft_strdup(s1);
// 	printf("%s\n", test);
// 	return (0);
// }