/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environment.c                                       ⠀⢀⣀⣀⣛⡑⢶⣬⣭⢩⣶⣿⣷⣭⢻⣦⡀    */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:54:35 by rboutelo          #+#    #+#             */
/*   Updated: 2026/08/01 17:27:51 by neumann            ⠀⠀⠙⠛⠉⠀⠀⠀⠻⠿⠟           */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @doc get_env
// @kind func
// @desc Returns value of the variable name in env.
// @param name: const char *, name of the variable to get the value of.
// @param env: char *const *, Environment, likely gotten from main.
// @returns char *, The retrieved value.
char	*ft_get_env(const char *name, char *const *env)
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

// @doc set_var
// @kind func
// @desc Sets the var pointed to by var to val.
// @param var: char **, Pointer to var, will likely be re-allocated.
// @param val: char *, Value to set var to.
void	ft_set_var(char **var, char *val)
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

// @doc set_env
// @kind func
// @desc Set the variable name to value value in env.
// @param name: const char *, The name of the variable to set in the env.
// @param env: char ***, The environment to the the variable in (in heap).
// @param value: char *, The value to set name to.
void	ft_set_env(const char *name, char ***env, char *value)
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
		*env = ft_realloc(*env, (ft_nt_tablen((void **)oenv) + 2)
				* sizeof(char *));
		var = ft_calloc(ft_strlen(name) + 2, sizeof(char));
		*(*env + ft_nt_tablen((void **)oenv)) = var;
		ft_strlcpy(var, name, ft_strlen(name) + 2);
		*(*env + ft_nt_tablen((void **)oenv) + 1) = NULL;
	}
	ft_set_var((*env + ft_nt_tablen((void **)oenv)), value);
}

// @doc set_exit_code
// @kind func
// @desc Sets ? in env to the stringified code.
// @param code: int32_t, Code to set ? to.
// @param env: char ***, Pointer to the env to set ? in.
void	ft_set_exit_code(int32_t code, char ***env)
{
	char	*its;

	its = ft_itoa(code % 256);
	ft_set_env("?", env, its);
	free(its);
}

// @doc ft_copy_env
// @kind func
// @desc Copies the char ** tab provided as env and returns the copy.
// @param env: char **, Pointer to the tab to copy.
// @returns char **
char	**ft_copy_env(const char **env)
{
	char **result;
	char **oresult;

	result = ft_calloc(ft_nt_tablen((void *)env), sizeof(char *));
	oresult = result;
	while (*env)
		*result++ = ft_strdup(*env++);
	return (oresult);
}
