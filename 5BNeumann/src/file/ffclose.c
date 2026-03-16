/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ffclose.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:10:57 by rboutelo          #+#    #+#             */
/*   Updated: 2026/03/01 04:40:58 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_file.h"

void	ft_ffclose(t_ffile file)
{
	remove_file(file);
	close(file);
}

void	close_pipe(int32_t *fds)
{
	close(fds[RE]);
	close(fds[WE]);
}
