/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:39 by rboutelo          #+#    #+#             */
/*   Updated: 2026/04/08 01:49:15 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_putstr_fd(const char *s, int32_t fd)
{
	int32_t	result;

	if (!s)
		return (0);
	result = write(fd, s, ft_strlen(s));
	return (result);
}

int32_t	ft_putstrn_fd(const char *s, int32_t fd, int32_t len)
{
	int32_t	result;

	if (!s)
		return (0);
	result = write(fd, s, min(ft_strlen(s), len));
	return (result);
}

int32_t	ft_putstr_fd_null(const char *s, int32_t fd)
{
	int32_t	result;

	if (!s)
		result = write(fd, "(null)", 6);
	else
		result = write(fd, s, ft_strlen(s));
	return (result);
}
