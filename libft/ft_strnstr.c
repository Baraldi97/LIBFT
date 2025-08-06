/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:35:53 by marvin            #+#    #+#             */
/*   Updated: 2025/07/31 22:35:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    if (*needle == '\0')
        return ((char *)haystack);
    i = 0;
    while (i < len && haystack[i] != '\0')
    {
        j = 0;
        if (haystack[i][j] == needle[i][j])
            return (&haystack)
        i++;
        j++;
    }
    return (NULL)
}