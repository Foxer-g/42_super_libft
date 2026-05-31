/* ************************************************************************** */
/*                                                                            */
/*                                                       ⠀⠀⠀⠀⠀⠀⣴⣾⣿⣿⣿⠷⢠⣤⡀      */
/*   execution.c                                         ⠀⢀⣀⣀⣛⡑⢶⣬⣭⢩⣶⣿⣷⣭⢻⣦⡀    */
/*                                                       ⣴⠛⢿⡟⠛⢿⣦⠹⣿⡆⣿⣿⣿⣿⣷⢩⡶⠃   */
/*   By: neumann </var/spool/mail/neumann>               ⣿⣖⠾⢗⣶⣾⣿⡇⠿⠷⠸⠿⢟⣛⡵⣫     */
/*                                                       ⠙⢿⣿⣿⣿⣿⣿⣿⣮⣭⣭⣭⡭⣶⣾⣿     */
/*   Created: 2026/05/31 19:29:15 by neumann            ⠀⠀⣿⣿⣿⠛⠛⠛⣿⣿⣿⠁⠀⠀⠉⠁      */
/*   Updated: 2026/05/31 19:29:45 by neumann            ⠀⠀⠙⠛⠉⠀⠀⠀⠻⠿⠟           */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
