/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environment.c                                       ⠀⢀⣀⣀⣛⡑⢶⣬⣭⢩⣶⣿⣷⣭⢻⣦⡀    */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:54:35 by rboutelo          #+#    #+#             */
/*   Updated: 2026/05/31 19:29:46 by neumann            ⠀⠀⠙⠛⠉⠀⠀⠀⠻⠿⠟           */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_env(const char *name, char *const *env)
{
	while (*env)
	{
		if (!ft_strncmp(name, *env, ft_strlen(name)))
		{
			if (*((*env) + ft_strlen(name)) == '=')
				return ((*env) + ft_strlen(name) + 1);
		}
		env++;
	}
	return (*env);
}

void	set_var(char **var, char *val)
{
	*var = ft_realloc(*var, ft_strlen(*var) + ft_strlen(val) + 2);
	while (**var && **var != '=')
		(*var)++;
	if (**var == '=')
		(*var)++;
	else
		**var = '=';
	ft_strlcat(*var, val, ft_strlen(*var) + ft_strlen(val) + 2);
}

void	set_env(const char *name, char ***env, char *value)
{
	char	*var;
	char	**oenv;

	var = NULL;
	oenv = *env;
	while (*oenv)
	{
		if (!ft_strncmp(name, *oenv, ft_strlen(name)))
		{
			if (*((*oenv) + ft_strlen(name)) == '=')
			{
				var = *oenv;
			}
		}
	}
	if (!var)
	{
		*env = ft_realloc(*env, (nt_tablen((void **)oenv) + 2) * sizeof(char *));
		var = ft_calloc(ft_strlen(name) + 2, sizeof(char));
		*(*env + nt_tablen((void **)oenv)) = var;
		ft_strlcpy(var, name, ft_strlen(name) + 2);
		*(*env + nt_tablen((void **)oenv) + 1) = NULL;
	}
	set_var((*env + nt_tablen((void **)oenv)), value);
}

void	set_exit_code(int32_t code, char ***env)
{
	char	*its;

	its = ft_itoa(code % 256);
	set_env("?", env, its);
	free(its);
}

