/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_f.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:33:04 by toespino          #+#    #+#             */
/*   Updated: 2025/11/10 19:40:11 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_f(unsigned int n)
{
	int	out;

	out = 0;
	if (n > 9)
	{
		out += ft_putunbr_f(n / 10);
		out += ft_putunbr_f(n % 10);
	}
	else
		out += ft_putchar_f(n + 48);
	return (out);
}
