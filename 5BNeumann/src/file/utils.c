/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:13:21 by rboutelo          #+#    #+#             */
/*   Updated: 2026/02/19 21:32:07 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_file.h"

inline uintmax_t	get_total_iov_len(const t_iovec *iov, uintmax_t cnt)
{
	uintmax_t	total;

	total = 0;
	while (cnt-- > 0)
		total += iov[cnt].iov_len;
	return (total);
}

inline void	reset_write_state(t_file *file)
{
	file->wpos = 0;
	file->wbase = 0;
	file->wend = 0;
}
