/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f0xer <f0xer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 02:58:13 by f0xer             #+#    #+#             */
/*   Updated: 2026/03/24 03:19:41 by f0xer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill_stash(char **stash)
{
	char	*buffer[BUFFER_SIZE + 1];
	int64_t	readed_bytes;

	readed_bytes = 1;
	while (ft_strchr(buffer, '\n') == 0 && readed_bytes > 0)
	{
		readed_bytes = read(fd, buffer, BUFFER_SIZE);
		if (readed_bytes < 0)
		{
			ft_free(&buffer, &stash[fd]);
			return ;
		}
		buffer[readed_bytes] = '\0';
		extend(stash, buffer);
	}
}

char	*get_next_line(int fd)
{
	static char	*stash[FD_SETSIZE];
	char		*out;

	if (fd == -1)
	{
		ft_free_tab(stash);
		return (NULL);
	}
	fill_stash(&stash[fd]);
	out = ft_substr(stash[fd], 0, end_line_pos);
	temp = ft_substr(stash[fd], EO_pos, ft_strlen(&stash[fd] - EOL_pos));
	free(stash[fd]);
	stash[fd] = temp;
	free(buffer);
	return (out);
}
