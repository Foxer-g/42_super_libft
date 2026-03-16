/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ffopen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:48:34 by rboutelo          #+#    #+#             */
/*   Updated: 2026/03/15 20:34:28 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_file.h"

static int32_t	fmodeflags(const char *mode)
{
	int32_t	flags;

	if (ft_strchr(mode, '+'))
		flags = O_RDWR;
	else if (*mode == 'r')
		flags = O_RDONLY;
	else
		flags = O_WRONLY;
	if (ft_strchr(mode, 'x'))
		flags |= O_EXCL;
	if (ft_strchr(mode, 'e'))
		flags |= O_CLOEXEC;
	if (*mode != 'r')
		flags |= O_CREAT;
	if (*mode == 'w')
		flags |= O_TRUNC;
	if (*mode == 'a')
		flags |= O_APPEND;
	return (flags);
}

t_ffile	ft_ffopen(char *filename, const char *mode)
{
	t_ffile	file;
	int32_t	flags;

	flags = fmodeflags(mode);
	file = open(filename, flags, 0666);
	if (file < 0)
		return (-1);
	append_file(file);
	return (file);
}

t_ffile	to_ffile(int32_t fd)
{
	t_ffile	file;

	file = fd;
	append_file(file);
	return (file);
}
