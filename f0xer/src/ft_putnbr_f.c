/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:02:32 by toespino          #+#    #+#             */
/*   Updated: 2025/11/10 19:39:23 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_f(int n)
{
	int	out;

	out = 0;
	if (n < 0)
	{
		out += ft_putchar_f('-');
		if (n < -9)
			out += ft_putnbr_f((n / 10) * -1);
		out += ft_putnbr_f((n % 10) * -1);
	}
	else if (n > 9)
	{
		out += ft_putnbr_f(n / 10);
		out += ft_putnbr_f(n % 10);
	}
	else
		out += ft_putchar_f(n + 48);
	return (out);
}
