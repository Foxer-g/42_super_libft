/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:40:38 by toespino          #+#    #+#             */
/*   Updated: 2026/01/04 23:55:12 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_memcmp(const void *s1, const void *s2, uint64_t n)
{
	uint64_t		i;
	unsigned char	*sb1;
	unsigned char	*sb2;

	i = -1;
	sb1 = (unsigned char *)s1;
	sb2 = (unsigned char *)s2;
	while (++i < n)
		if (sb1[i] != sb2[i])
			return (sb1[i] - sb2[i]);
	return (0);
}
