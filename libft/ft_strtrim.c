/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 19:59:14 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/10 19:53:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	if (!s1 || !set)
		return (NULL);
	size_t	i;
	size_t	j;
	char	*new_str;
	
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
	{
		j--;
	}
	new_str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1 + i, j - i + 1);
	return (new_str);
}
