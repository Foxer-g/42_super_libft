/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:03:39 by toespino          #+#    #+#             */
/*   Updated: 2025/11/11 16:42:49 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_f(char *arg)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	if (!arg)
		return (ft_putstr_f("(null)"));
	while (arg[i])
	{
		out += ft_putchar_f(arg[i]);
		i++;
	}
	return (out);
}
