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

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while(*str)
    {
        str++;
        len++;
    }
    return(len);
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%d", ft_strlen("Rodrigo"));
//     return (0);
// }