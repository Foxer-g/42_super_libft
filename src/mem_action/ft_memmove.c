/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f0xer <f0xer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 06:43:39 by f0xer             #+#    #+#             */
/*   Updated: 2026/03/29 06:56:03 by f0xer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove()
{
	uintmax_t	i;
	char		*dest_ch;
	char		*src_ch;

	dest_ch = (char *)dest;
	src_ch = (char *)src;
	i = n;
	if (src_ch < dest_ch)
		while (n > --i)
			dest_ch[i] = src_ch[i];
	else
		ft_memcpy(dest, src, n);
	return ((void *)dest_ch);
}
