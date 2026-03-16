/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:01:55 by toespino          #+#    #+#             */
/*   Updated: 2026/01/05 00:08:45 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint64_t	ft_strlcat(char *dst, const char *src, uint64_t size)
{
	uint64_t	len;
	uint64_t	lenbis;
	uint64_t	i;

	lenbis = ft_strlen((char *)src);
	if (size == 0)
		return (lenbis);
	i = 0;
	len = ft_strlen(dst);
	if (size <= len)
		return (size + lenbis);
	while (src[i] && i + len + 1 < size)
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (len + lenbis);
}
