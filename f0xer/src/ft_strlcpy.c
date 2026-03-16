/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:02:48 by toespino          #+#    #+#             */
/*   Updated: 2026/01/05 00:09:43 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint64_t	ft_strlcpy(char *dst, const char *src, uint64_t size)
{
	uint64_t	srclen;
	uint64_t	i;

	srclen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	if (size > 0)
	{
		while (i < size - 1 && i < srclen)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
