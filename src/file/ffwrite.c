/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ffwrite.c                                           ⠀⢀⣀⣀⣛⡑⢶⣬⣭⢩⣶⣿⣷⣭⢻⣦⡀    */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:25:02 by rboutelo          #+#    #+#             */
/*   Updated: 2026/07/30 20:10:43 by neumann            ⠀⠀⠙⠛⠉⠀⠀⠀⠻⠿⠟           */
/*                                                                            */
/* ************************************************************************** */

#include "int_file.h"

// @doc ft_ffwrite
// @kind func
// @desc Small wraper around write. See ft_ffread for more info.
// @param file: [[t_ffile]], The targeted file.
// @param buf: const void *, the buffer to write to.
// @param nbyte: intmax_t, The number of bytes to write.
// @returns intmax_t, The number of bytes written.
intmax_t	ft_ffwrite(t_ffile file, const void *buf, intmax_t nbyte)
{
	intmax_t	result;

	if (nbyte < 0)
		return (-1);
	result = write(file, buf, nbyte);
	return (result);
}
