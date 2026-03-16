/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:27:00 by toespino          #+#    #+#             */
/*   Updated: 2026/01/05 00:04:54 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int32_t c)
{
	char	*dest;
	int32_t	i;

	i = 0;
	dest = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			dest = (char *)&s[i];
			break ;
		}
		i++;
	}
	return (dest);
}
