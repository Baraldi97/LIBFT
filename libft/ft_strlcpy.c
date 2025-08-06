/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:01:13 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/06 15:01:15 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	while (src[i] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (len);
}
// int	main(void)
// {
// 	char	name[8] = "Rodrigo";
// 	char	cpyname[8] = "";

// 	printf("%s\n", name);
// 	ft_strlcpy(cpyname, name, 8);
// 	printf("%s", cpyname);
// 	return(0);
// }
