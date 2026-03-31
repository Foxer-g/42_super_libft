/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f0xer <f0xer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 06:31:32 by f0xer             #+#    #+#             */
/*   Updated: 2026/03/29 06:45:31 by f0xer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, uintmax_t n)
{
	uintmax_t	i;
	char		*dest_ch;
	char		*src_ch;

	if (!dest || ! src)
		return (NULL);
	dest_ch = (char *)dest;
	src_ch = (char *)src;
	i = 0;
	while (i < n)
	{
		dest_ch[i] = src_ch[i];
		i++;
	}
	return (dest);
}
