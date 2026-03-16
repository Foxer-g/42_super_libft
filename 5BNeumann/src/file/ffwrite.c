/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ffwrite.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:25:02 by rboutelo          #+#    #+#             */
/*   Updated: 2026/03/01 04:35:36 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_file.h"

intmax_t	ft_ffwrite(t_ffile file, const void *buf, intmax_t nbyte)
{
	intmax_t	result;

	if (nbyte < 0)
		return (-1);
	result = write(file, buf, nbyte);
	return (result);
}
