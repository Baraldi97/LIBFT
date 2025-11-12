/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:35:18 by rcosta            #+#    #+#             */
/*   Updated: 2025/11/10 18:17:30 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// Função para imprimir uma string
void ft_putstr(char *s)
{
    while (*s)
    {
        write(1, s, 1);
        s++;
    }
}

char	*ft_firstword(char *s)
{
	char	*fw;

	// Verifica se a string é vazia
	if (!s || *s == '\0')
		return (NULL);

	// Ignora espaços iniciais
	while (*s == ' ')
		s++;

	// Marca o início da primeira palavra
	fw = s;

	// Percorre até encontrar um espaço ou o final da string
	while (*s != '\0' && *s != ' ')
		s++;

	// Substitui o espaço pelo caractere nulo para isolar a palavra
	if (*s == ' ')
		*s = '\0';

	return (fw);
}

int	main(void)
{
	char	str[] = "Oi Rodrigo"; // Usa um array de caracteres para permitir modificação
	char	*firstword;

	firstword = ft_firstword(str);
	if (firstword)
		ft_putstr(firstword);
	else
		ft_putstr("\n");

	return (0);
}
