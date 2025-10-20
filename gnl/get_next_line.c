/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:17:14 by rcosta            #+#    #+#             */
/*   Updated: 2025/10/20 19:32:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_from_file(int fd, char *stash, char *read_buffer);
static char	*extract_line(char *stash);
static char	*update_stash(char *old_stash);

/*
 * A função principal. Orquestra a leitura e extração da linha.
 */
char *get_next_line(int fd)
{
    static char	*stash; // 'stash' (estoque) guarda o que sobrou da leitura.
    char		*line;
    char		*read_buffer;

	// A verificação de segurança permanece, pois é eficiente e importante.
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	// Alocamos o buffer de leitura apenas se o fd for válido.
	read_buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!read_buffer)
		return (NULL);

	// 1. Lê do arquivo e acumula no 'stash' até encontrar um '\n'
	stash = read_from_file(fd, stash, read_buffer);
	free(read_buffer); // O buffer de leitura já cumpriu seu papel.
	if (!stash)
		return (NULL);

	// 2. Extrai a linha completa do 'stash'
	line = extract_line(stash);

	// 3. O 'stash' é atualizado para conter apenas o que sobrou após a linha.
	// Esta operação é feita dentro de extract_line, que retorna a linha e 
	// deixa o stash modificado para a próxima chamada. (Esta parte é conceitual,
	// o código manipula os ponteiros para que a 'line' aponte para a linha
	// e o 'stash' para o resto). Na prática, a nova 'stash' é o que sobra.
	// O código abaixo lida com a atualização do ponteiro.
	stash = update_stash(stash);
	return (line);
}

/*
 * Lê do arquivo em blocos e os anexa ao 'stash' até que uma nova linha ('\n')
 * seja encontrada no 'stash' ou o arquivo termine.
 */
static char *read_from_file(int fd, char *stash, char *read_buffer)
{
	char	*temp_ptr;
	ssize_t	bytes_read;

	bytes_read = 1;
	// Otimização: O loop continua apenas se ainda não tivermos uma linha
	// completa no stash E se a última leitura foi bem-sucedida.
	while (!ft_strchr(stash, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
		if (bytes_read < 0) // Erro de leitura
		{
			free(stash);
			return (NULL);
		}
		if (bytes_read == 0) // Fim do arquivo
			break;
		read_buffer[bytes_read] = '\0';
		if (!stash) // Garante que o stash seja inicializado na primeira vez
			stash = ft_strdup("");
		temp_ptr = stash;
		stash = ft_strjoin(temp_ptr, read_buffer);
		free(temp_ptr);
	}
	return (stash);
}

/*
 * Pega o 'stash', extrai a primeira linha dele e retorna essa linha.
 * O 'stash' original é modificado para ser usado pela função update_stash.
 */
static char	*extract_line(char *stash)
{
	char	*line;
	size_t	line_len;

	line_len = 0;
	if (!stash[line_len]) // Stash vazio, nada a retornar
		return (NULL);
	// Calcula o tamanho da linha até o '\n'
	while (stash[line_len] && stash[line_len] != '\n')
		line_len++;
	// Se encontramos um '\n', incluímos ele na contagem para a linha.
	if (stash[line_len] == '\n')
		line_len++;
	// Aloca memória e copia a linha do stash. ft_substr é ideal aqui.
	line = ft_substr(stash, 0, line_len);
	if (!line || line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	return (line);
}

/*
 * Atualiza o 'stash' para conter apenas os caracteres que vieram DEPOIS
 * da linha que foi extraída. Libera a memória do 'stash' antigo.
 */
static char *update_stash(char *old_stash)
{
	char	*new_stash;
	size_t	start_index;

	start_index = 0;
	if (!old_stash)
		return (NULL);
	while (old_stash[start_index] && old_stash[start_index] != '\n')
		start_index++;
	// Se não encontramos '\n' ou ele é o último caractere, não há sobra.
	if (!old_stash[start_index] || !old_stash[start_index + 1])
	{
		free(old_stash);
		return (NULL);
	}
	start_index++; // Pula o caractere '\n'
	// A sobra é uma substring do stash antigo, começando após o '\n'.
	new_stash = ft_substr(old_stash, start_index, ft_strlen(old_stash) - start_index);
	free(old_stash); // O stash antigo já foi processado e pode ser liberado.
	if (!new_stash)
		return (NULL);
	return (new_stash);

}
