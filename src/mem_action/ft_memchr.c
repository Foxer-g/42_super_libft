/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f0xer <f0xer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 23:47:01 by f0xer             #+#    #+#             */
/*   Updated: 2026/03/31 16:57:07 by f0xer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int32_t c, uintmax_t n)
{
	uintmax_t		i;
	unsigned char	*result;

	result = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (result[i++] == ((unsigned char) c))
			return (&result[--i]);
	}
	return (NULL);
}
