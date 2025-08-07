/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 19:59:14 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/07 20:28:29 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	
	if (s1 == NULL || set == NULL)
		return (NULL);	
	i = 0;
	while (ft_strchr(set, s1[i]) != NULL)
	{
		i++;
	}
	j = ft_strlen(s1) - 1;
	s1 = malloc(j - i + 1);
	while (ft_strchr(set, s1[j]) != NULL && j >= i)
	{
		j--;
	}
	s1[j - i] = '\0';
}
