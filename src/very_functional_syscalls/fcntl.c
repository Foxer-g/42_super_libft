/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fcntl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 23:34:55 by rboutelo          #+#    #+#             */
/*   Updated: 2026/02/18 02:21:01 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syscalls.h"

#ifdef AUTHORIZED_FCNTL

int32_t	ft_fcntl(int32_t fd, int32_t cmd, int32_t flags)
{
	const int32_t	result = fcntl(fd, cmd, flags);

	return (result);
}
#else //AUTHORIZED_FCNTL
// I don't call fcntl because it's not authorized so yea, void everything...

int32_t	ft_fcntl(int32_t fd, int32_t cmd, int32_t flags)
{
	(void)fd;
	(void)cmd;
	(void)flags;
	return (0);
}
#endif //AUTHORIZED_FCNTL
