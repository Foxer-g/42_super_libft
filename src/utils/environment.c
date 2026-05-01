/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environment.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:54:35 by rboutelo          #+#    #+#             */
/*   Updated: 2026/03/10 02:49:29 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_env(const char *name, char *const *env)
{
	while (*env)
	{
		if (!ft_strncmp(name, *env, ft_strlen(name)))
			return ((*env) + ft_strlen(name));
		env++;
	}
	return (*env);
}

char	*get_executable(const char *str)
{
	char	*result;

	result = ft_calloc(ft_fwlen(str) + 2, sizeof(char));
	result[0] = '/';
	ft_strlcat(result, str, ft_fwlen(str) + 2);
	return (result);
}

char	*find_exec(const char *name, char const **env)
{
	char	*result;

	while (env && *env)
	{
		result = ft_strjoin(*env, name);
		if (!access(result, X_OK))
			return (result);
		free(result);
		env++;
	}
	result = ft_strdup(name);
	return (result);
}
