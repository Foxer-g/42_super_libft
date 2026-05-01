/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 00:50:54 by rboutelo          #+#    #+#             */
/*   Updated: 2026/03/10 01:30:42 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uintmax_t	min(uintmax_t a, uintmax_t b)
{
	if (a < b)
		return (a);
	return (b);
}

uintmax_t	max(uintmax_t a, uintmax_t b)
{
	if (a > b)
		return (a);
	return (b);
}

int32_t	nt_tablen(void **tab)
{
	int32_t	len;

	len = 0;
	while (tab && tab[len])
		len++;
	return (len);
}
