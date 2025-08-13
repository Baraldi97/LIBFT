/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:21:16 by marvin            #+#    #+#             */
/*   Updated: 2025/08/11 18:21:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}
static void	free_all(char **arr, int i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}

static char	**fill_array(char **result, char const *s, char c, int num_words)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (i < num_words)
	{
		while (s[j] && s[j] == c)
		j++;
		start = j;
		while (s[j] && s[j] != c)
		j++;
		result[i] = ft_substr(s, start, j - start);
		if (!result[i])
		{
			free_all(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		num_words;

	if (!s)
		return (NULL);
	num_words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!result)
		return (NULL);
	if (!fill_array(result, s, c, num_words))
	{
		return (NULL);
	}
	return (result);
}
