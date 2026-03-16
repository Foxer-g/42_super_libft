/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:21:14 by toespino          #+#    #+#             */
/*   Updated: 2025/11/23 14:50:46 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_misc(char *str, va_list arg)
{
	int	out;

	out = 0;
	if (*str == 'c')
		out += ft_putchar_f(va_arg(arg, int));
	else if (*str == 's')
		out += ft_putstr_f(va_arg(arg, char *));
	else if (*str == 'X' || *str == 'x')
		out += ft_puthexa_f(va_arg(arg, unsigned int), *str == 'X');
	else if (*str == 'd' || *str == 'i')
		out += ft_putnbr_f(va_arg(arg, int));
	else if (*str == 'u')
		out += ft_putunbr_f(va_arg(arg, unsigned int));
	else if (*str == 'p')
		out += ft_putptr_f(va_arg(arg, unsigned long int));
	else if (*str == '%')
		out += ft_putchar_f('%');
	else
	{
		out += ft_putchar_f(*str - 1);
		out += ft_putchar_f(*str);
	}
	return (out);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;

	if (!str)
		return (-1);
	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			if (!(*(str + 1)))
				return (-1);
			else
				len += ft_misc((char *)str + 1, args);
			str += 2;
		}
		else
		{
			len += ft_putchar_f(*str);
			str++;
		}
	}
	va_end(args);
	return (len);
}
