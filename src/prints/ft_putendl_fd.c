/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:36:04 by rboutelo          #+#    #+#             */
/*   Updated: 2026/04/08 01:46:54 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_putendl_fd(const char *s, int32_t fd)
{
	int32_t	result;

	if (!s)
		return (0);
	result = ft_putstr_fd(s, fd);
	result += ft_putchar_fd('\n', fd);
	return (result);
}

int32_t	ft_puts(char *s)
{
	int32_t	result;

	result = ft_putendl_fd(s, STDOUT_FILENO);
	return (result);
}
