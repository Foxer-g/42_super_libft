/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:27:00 by toespino          #+#    #+#             */
/*   Updated: 2026/01/21 19:50:48 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int32_t c, uint64_t n)
{
	char			*dest;
	uint64_t		i;
	unsigned char	*temp;

	i = 0;
	dest = NULL;
	temp = (void *)s;
	while (i < n)
	{
		if (temp[i] == (unsigned char)c)
		{
			dest = (char *)s + i;
			break ;
		}
		i++;
	}
	return (dest);
}
