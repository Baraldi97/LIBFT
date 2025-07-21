/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:58:18 by marvin            #+#    #+#             */
/*   Updated: 2025/07/19 14:58:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//Criando length para ver o tamanho da string e alocar na memória o tamnho certo

int    tam(char  *c)
{
    int i;

    i = 0;
    while(c[i] != '\0')
    {
        i++;
    }
    return(i);
}
//Alocando espaço necessário na memória e implementando a função tam que criei já na duplicate string
char    *ft_strdup(char *scr)
{
    char    *duplicate_str;
    int     len;
    int     i;

    len = tam(scr);
    duplicate_str = (char *)malloc((len + 1) * sizeof(char));
    
    if (duplicate_str == NULL)
    {
        return(NULL);
    }

    i = 0;
    while(scr[i] != '\0')
    {
        duplicate_str[i] = scr[i];
        i++;
    }
    duplicate_str[i] = '\0';

    return(duplicate_str);
}

int main(void)
{
    char    *word;
    char    *copyword;

    word = "rodrigo";
    copyword = NULL;
    copyword = ft_strdup(word);

    printf("My string '%s' has the following adress %p, and my copy string '%s' has the following adress %p \n", word, (void *)word, copyword, (void *)copyword );
    return(0);
}
