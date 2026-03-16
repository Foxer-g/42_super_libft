/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:35:08 by toespino          #+#    #+#             */
/*   Updated: 2026/01/21 19:51:05 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, uint64_t n)
{
	uint64_t			i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	i = -1;
	ptr = dest;
	ptr2 = src;
	while (++i < n)
		ptr[i] = ptr2[i];
	return (dest);
}
