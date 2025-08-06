/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:10:18 by marvin            #+#    #+#             */
/*   Updated: 2025/08/05 16:10:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *var_s;
	size_t	i;

	var_s = (unsigned char *)s;
	i = 0;

	while (i < n)
	{
		if (var_s[i] == c)
			return (&var_s[i]);
		i++;
	}
	return (NULL);
}
