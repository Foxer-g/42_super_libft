/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:30:58 by rboutelo          #+#    #+#             */
/*   Updated: 2026/03/10 01:43:34 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int32_t	count_strs(char const *s, const char c)
{
	int32_t	i;
	int32_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

void	*free_nt_tab(char **str, const int32_t alloc_count)
{
	int32_t	i;

	i = 0;
	while (str && str[i] && i < alloc_count)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static uintmax_t	get_cur_len(char const *str, const char c)
{
	uintmax_t	i;
	uintmax_t	j;

	j = 0;
	while (str[j] == c)
		j++;
	i = 0;
	while (str[j] != c && str[j])
	{
		j++;
		i++;
	}
	return (i);
}

static void	write_tab(char **tab, char const *s, char c, char *error)
{
	uintmax_t	i;
	uintmax_t	j;
	int32_t		strc;

	j = 0;
	strc = 0;
	while (s[j])
	{
		i = get_cur_len(&s[j], c);
		while (s[j] == c)
			j++;
		if (s[j] == '\0' && s[j - 1] == c)
			break ;
		tab[strc] = ft_substr(&s[j], 0, i);
		if (!tab[strc++])
		{
			free_nt_tab(tab, strc - 1);
			*error = 1;
			return ;
		}
		j = j + i;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int32_t	strc;
	char	error;

	error = 0;
	if (!s)
		return (NULL);
	strc = count_strs(s, c);
	result = ft_calloc(strc + 1, sizeof(char *));
	if (!result)
		return (NULL);
	write_tab(result, s, c, &error);
	if (error)
		return (NULL);
	return (result);
}
