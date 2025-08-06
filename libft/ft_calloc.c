/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:03:29 by rcosta            #+#    #+#             */
/*   Updated: 2025/08/06 19:19:20 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	n_size;
	void	*ptr;

	n_size = nmemb * size;
	if (nmemb != 0 && n_size / nmemb != size)
		return (NULL);
	ptr = ft_malloc(n_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n_size);
	return (ptr);
}
