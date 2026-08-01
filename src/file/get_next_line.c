/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                     ⠀⢀⣀⣀⣛⡑⢶⣬⣭⢩⣶⣿⣷⣭⢻⣦⡀    */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 04:11:03 by rboutelo          #+#    #+#             */
/*   Updated: 2026/07/30 20:20:40 by neumann            ⠀⠀⠙⠛⠉⠀⠀⠀⠻⠿⠟           */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int8_t	readline(char *buffer, char **persistant, int fd)
{
	int64_t	status;

	while (!ft_strchr(buffer, '\n'))
	{
		status = read(fd, buffer, BUFFER_SIZE);
		if (status <= 0)
		{
			if (*persistant && status < 0)
				free(*persistant);
			return (!status);
		}
		buffer[status] = '\0';
		*persistant = extend(*persistant, buffer);
	}
	return (1);
}

static char	*get_line_from_stash(char **stash)
{
	char	*line;
	char	*nstash;

	if (!stash || !*stash)
		return (NULL);
	if (!**stash)
	{
		free(*stash);
		return (NULL);
	}
	line = ft_strndup(*stash, ft_strlen_until(*stash, '\n') + 1);
	nstash = ft_strndup(ft_strchr(*stash, '\n') + 1,
			ft_strlen_until(ft_strchr(*stash, '\n') + 1, '\0'));
	free(*stash);
	*stash = nstash;
	return (line);
}

// @doc get_next_line
// @kind func
// @desc Its get next line. It gets a line from the provided fd.
// @param fd: [[t_ffile]], The file to read a line from.
// @returns char *, The line.
char	*get_next_line(t_ffile fd)
{
	static char	*stash;
	char		buf[BUFFER_SIZE + 1];
	char		*str;
	int8_t		success;
	static int	last_fd;

	if (!last_fd)
		last_fd = fd;
	if (fd != last_fd && fd)
		return (NULL);
	ft_bzero(buf, sizeof(buf));
	success = readline((char *)&buf, &stash, fd);
	if (!success)
		return (NULL);
	str = get_line_from_stash(&stash);
	return (str);
}
