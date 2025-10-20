/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:21:35 by rcosta            #+#    #+#             */
/*   Updated: 2025/10/19 18:19:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// Define BUFFER_SIZE se não for definido na compilação
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// Includes essenciais para o GNL
# include <stdlib.h> // Para malloc() e free()
# include <unistd.h> // Para read()

// Inclui o cabeçalho da sua libft, que contém os protótipos das funções ft_*
# include "libft.h" 

// A única função pública do projeto get_next_line
char	*get_next_line(int fd);

#endif