/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:02:11 by toespino          #+#    #+#             */
/*   Updated: 2026/01/05 00:18:45 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, uint64_t len)
{
	uint64_t	i;
	uint64_t	j;
	char		*str;
	char		*to_find;

	i = 0;
	j = 0;
	str = (char *)big;
	to_find = (char *)little;
	if (to_find[0] == 0)
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		while (i + j < len && str[i + j] && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
