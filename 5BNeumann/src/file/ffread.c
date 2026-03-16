/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ffread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:24:15 by rboutelo          #+#    #+#             */
/*   Updated: 2026/02/25 04:29:06 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_file.h"

intmax_t	ft_ffread(t_ffile file, void *buf, intmax_t nbyte)
{
	intmax_t	result;

	if (nbyte < 0)
		return (-1);
	result = read(file, buf, nbyte);
	return (result);
}

intmax_t	ft_ffreadall(t_ffile file, void **buf)
{
	char	*lines;
	char	*line;

	lines = NULL;
	line = get_next_line(file);
	while (line)
	{
		lines = extend(lines, line);
		line = get_next_line(file);
	}
	*buf = lines;
	return (ft_strlen(lines));
}
