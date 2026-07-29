/* ************************************************************************** */
/*                                                                            */
/*                                                       ⠀⠀⠀⠀⠀⠀⣴⣾⣿⣿⣿⠷⢠⣤⡀      */
/*   execution.c                                         ⠀⢀⣀⣀⣛⡑⢶⣬⣭⢩⣶⣿⣷⣭⢻⣦⡀    */
/*                                                       ⣴⠛⢿⡟⠛⢿⣦⠹⣿⡆⣿⣿⣿⣿⣷⢩⡶⠃   */
/*   By: neumann </var/spool/mail/neumann>               ⣿⣖⠾⢗⣶⣾⣿⡇⠿⠷⠸⠿⢟⣛⡵⣫     */
/*                                                       ⠙⢿⣿⣿⣿⣿⣿⣿⣮⣭⣭⣭⡭⣶⣾⣿     */
/*   Created: 2026/05/31 19:29:15 by neumann            ⠀⠀⣿⣿⣿⠛⠛⠛⣿⣿⣿⠁⠀⠀⠉⠁      */
/*   Updated: 2026/07/29 16:35:26 by neumann            ⠀⠀⠙⠛⠉⠀⠀⠀⠻⠿⠟           */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @doc ft_get_executable
// @kind func
// @desc Returns the first string of a command line prepanded with a /.
// @param str: const char *, Command line of which you need the executable.
// @returns char *, Executable prepended with /.
char	*ft_get_executable(const char *str)
{
	char	*result;

	result = ft_calloc(ft_fwlen(str) + 2, sizeof(char));
	result[0] = '/';
	ft_strlcat(result, str, ft_fwlen(str) + 2);
	return (result);
}

// @doc ft_find_exec
// @kind func
// @desc Returns the path to the executable name.
// @param name: const char *, name of the executable prepended with a /.
// @param env: char const **, Environment, most likely gotten through main.
// @returns char *, Path to the executable.
char	*ft_find_exec(const char *name, char const **env)
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
