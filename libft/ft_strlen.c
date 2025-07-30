/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:21:53 by marvin            #+#    #+#             */
/*   Updated: 2025/07/22 15:21:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%d", ft_strlen("Rodrigo"));
//     return (0);
// }





#include <libft.h>

size_t	ft_strlen(const char *str);

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;
	size_t i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;

	if (dstsize < dst_len)
		return (dstsize + src_len);
	while( src[i] != '\0' && dst_len + i + 1 < dstsize)
	{
		dst[dst_len + i] =  src[i];
		i++;
	}
	dst[dst_len + i] =  '\0';
	return (src_len + dst_len);
}