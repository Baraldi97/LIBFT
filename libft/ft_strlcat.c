/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:00:47 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/06 15:00:58 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] != '\0' && dst_len + i + 1 < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
// int	main(void)
// {
// 	char	name[9] = " Baraldi";
// 	char	surname[8] = "Rodrigo";
// 	ft_strlcat(surname, name, 17);
// 	printf("Concatenated name: %s\n", surname);
// 	return(0);
// }