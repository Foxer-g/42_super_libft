/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:38:37 by toespino          #+#    #+#             */
/*   Updated: 2026/01/21 19:54:23 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int32_t	ft_isset(char c, const char *set)
{
	int32_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char *s1, char *set)
{
	int32_t		i;
	int32_t		len;
	char		*out;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen((char *)s1);
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	while (i < len && ft_isset(s1[len - 1], set))
		len--;
	out = ft_substr(s1, i, len - i);
	return (out);
}
