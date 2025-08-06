/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:01:43 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/06 15:01:43 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i][j] == needle[i][j])
			return (&haystack);
		i++;
		j++;
	}
	return (NULL);
}
