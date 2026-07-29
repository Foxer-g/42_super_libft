/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ffclose.c                                           ⠀⢀⣀⣀⣛⡑⢶⣬⣭⢩⣶⣿⣷⣭⢻⣦⡀    */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:10:57 by rboutelo          #+#    #+#             */
/*   Updated: 2026/07/29 15:23:55 by neumann            ⠀⠀⠙⠛⠉⠀⠀⠀⠻⠿⠟           */
/*                                                                            */
/* ************************************************************************** */

#include "int_file.h"

void	ft_ffclose(t_ffile file)
{
	remove_file(file);
	close(file);
}

void	ft_close_pipe(int32_t *fds)
{
	close(fds[RE]);
	close(fds[WE]);
}
