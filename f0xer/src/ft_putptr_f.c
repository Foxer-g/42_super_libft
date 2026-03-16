/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:37:40 by toespino          #+#    #+#             */
/*   Updated: 2025/11/11 18:35:27 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ptr_f(unsigned long int arg)
{
	int		out;
	char	*lst;

	out = 0;
	lst = "0123456789abcdef";
	if (arg > 15)
		out += ptr_f(arg / 16);
	out += ft_putchar_f(lst[arg % 16]);
	return (out);
}

int	ft_putptr_f(unsigned long int arg)
{
	int	out;

	out = 0;
	if (arg == 0)
		return (ft_putstr_f("(nil)"));
	else
	{
		out += ft_putstr_f("0x");
		out += ptr_f(arg);
	}
	return (out);
}
