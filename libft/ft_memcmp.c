/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:49:33 by marvin            #+#    #+#             */
/*   Updated: 2025/08/05 11:49:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *var1;
    unsigned char *var2;
	var1 = (unsigned char *)s1;
    var2 = (unsigned char *)s2;
    size_t	i;
	int	result;

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