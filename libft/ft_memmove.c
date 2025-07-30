/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:53:53 by rcosta            #+#    #+#             */
/*   Updated: 2025/07/30 11:53:53 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char*)dest;
	s = (unsigned const char*)src;

	if(!dest && !src && n > 0)
	return (NULL);
	if(d < s)
	{
		i = 0;
		while(i < n)
			d[i] = s[i], i++;
	}
	else if(d > s)
	{
		i = n;
		while(i-- > 0)
			d[i] = s[i];
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str[11] = "ABCDEFGHIJ";
//     ft_memmove(str + 2, str, 5);
//     printf("%s\n", str);
//     return 0;
// }
