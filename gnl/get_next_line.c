/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:17:14 by rcosta            #+#    #+#             */
/*   Updated: 2025/10/21 00:07:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_from_file(int fd, char *stash, char *read_buffer);
static char	*extract_line(char *stash);
static char	*update_stash(char *old_stash);

static char	*read_from_file(int fd, char *stash, char *read_buffer)
{
	char	*temp_ptr;
	ssize_t	bytes_read;

	bytes_read = 1;
	if (!stash)
		stash = ft_strdup("");
	if (!stash)
		return (NULL);
	while (!ft_strchr(stash, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (NULL);
		read_buffer[bytes_read] = '\0';
		temp_ptr = stash;
		stash = ft_strjoin(temp_ptr, read_buffer);
		free(temp_ptr);
		if (!stash)
			return (NULL);
	}
	return (stash);
}

static char	*extract_line(char *stash)
{
	char	*line;
	size_t	line_len;

	if (!stash || !stash[0])
		return (NULL);
	line_len = 0;
	while (stash[line_len] && stash[line_len] != '\n')
		line_len++;
	if (stash[line_len] == '\n')
		line_len++;
	line = ft_substr(stash, 0, line_len);
	return (line);
}

static char	*update_stash(char *old_stash)
{
	char	*new_stash;
	size_t	start_index;

	if (!old_stash)
		return (NULL);
	start_index = 0;
	while (old_stash[start_index]
		&& old_stash[start_index] != '\n')
		start_index++;
	if (old_stash[start_index] == '\n')
		start_index++;
	if (!old_stash[start_index])
	{
		free(old_stash);
		return (NULL);
	}
	new_stash = ft_substr(old_stash, start_index,
			ft_strlen(old_stash) - start_index);
	free(old_stash);
	return (new_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*read_buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	read_buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!read_buffer)
		return (NULL);
	stash = read_from_file(fd, stash, read_buffer);
	free(read_buffer);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = update_stash(stash);
	return (line);
}
