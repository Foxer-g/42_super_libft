/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f0xer <f0xer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:35:26 by f0xer             #+#    #+#             */
/*   Updated: 2026/03/31 16:44:07 by f0xer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(uintmax_t len, ...)
{
	va_list	args;
	void	**temp;

	va_start(args, len);
	while (len)
	{
		temp = (void **)va_arg(args, char **);
		free(*temp);
		*temp = NULL;
		len--;
	}
}

void	ft_free_tab(uintmax_t len, ...)
{
	va_list		args;
	void		***temp;
	intmax_t	i;

	va_start(args, len);
	while (len)
	{
		i = 0;
		temp = (void ***)va_arg(args, char ***);
		while (*temp[i])
		{
			free(*temp[i]);
			*temp[i] = NULL;
			i++;
		}
		free(*temp);
		*temp = NULL;
		len--;
	}
}
