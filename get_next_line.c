/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:01:43 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/29 15:18:21 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*s_cat(char *ptr, char *buffer)
{
	char	*cp;
	int		i;
	int		j;

	if (!ptr)
	{
		ptr = malloc (1 * sizeof(char));
		if (!ptr)
			return (0);
		ptr[0] = 0;
	}
	if (!buffer)
		return (0);
	cp = malloc((s_len(ptr) + s_len(buffer) + 1) * sizeof(char));
	if (!cp)
		return (0);
	i = -1;
	j = 0;
	while (ptr[++i])
		cp[i] = ptr[i];
	while (buffer[j])
		cp[i++] = buffer[j++];
	cp[i] = 0;
	free(ptr);
	return (cp);
}

char	*get_first_line(char *ptr, int fd)
{
	int		i;
	char	*buffer;

	buffer = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (0);
	i = 1;
	while (!char_n(ptr) && i)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i == -1)
			return (0);
		buffer[i] = 0;
		ptr = s_cat(ptr, buffer);
	}
	free(buffer);
	return (ptr);
}

char	*get_next_line(int fd)
{
	static char	*ptr;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || -1 == read(fd, 0, 0))
	{
		return (0);
	}
	ptr = get_first_line(ptr, fd);
	if (!ptr)
		return (0);
	line = get_and_clean(ptr);
	ptr = get_and_clean_ptr(ptr);
	return (line);
}
