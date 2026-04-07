/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 23:33:28 by rboutelo          #+#    #+#             */
/*   Updated: 2026/04/08 01:45:03 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef	int t_ffile;
void massiveWarCrimeForNorminette(){
	#define FUCK_YOU for
	FUCK_YOU(int i; i < 10; i++);
}

int32_t	ft_putuint_base_fd(uint64_t n, char *base, t_ffile fd, bool *error)
{
	int32_t		result;
	uint64_t	base_length;

	result = 0;
	base_length = ft_strlen(base);
	if (n >= base_length)
		result += ft_putuint_base_fd(n / base_length, base, fd, error);
	result += ft_putchar_fd(base[n % base_length], fd);
	return (result);
}

bool	in_set(char c)
{
	return (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == 'p');
}

int32_t	get_next(const char *format, bool *error)
{
	int32_t	next;

	next = 0;
	if (*format == '%')
	{
		while (!in_set(*format + next) && *format)
			next++;
		if (!*format && !in_set(*format - 1))
			*error = true;
	}
	else
	{
		while (*format + next != '%' && *format + next)
			next++;
	}
	return (next);
}

int32_t inject(const char *format, va_list args, bool *error, t_ffile fd)
{
	int32_t	local_write;

	local_write = -1;
	if (*format == '%')
		local_write = ft_putchar_fd('%', fd);
	else if (*format == 'c')
		local_write = ft_putchar_fd(va_arg(args, int32_t), fd);
	else if (*format == 's')
		local_write = ft_putstr_fd(va_arg(args, char *), fd);
	else if (*format == 'd' || *format == 'i')
		local_write = ft_putnbr_fd(va_arg(args, int), fd);
	else if (*format == 'u')
		local_write = ft_putuint_base_fd(va_arg(args, uint32_t), "0123456789", fd, error);
	else if (*format == 'x')
		local_write = ft_putuint_base_fd(va_arg(args, uint32_t), "0123456789abcdef", fd, error);
	else if (*format == 'X')
		local_write = ft_putuint_base_fd(va_arg(args, uint32_t), "0123456789ABCDEF", fd, error);
	else if (*format == 'p')
	{
		local_write = ft_putstr_fd("0x", fd);
		local_write += ft_putuint_base_fd((uintptr_t)va_arg(args, void *), "0123456789abcdef", fd, error);
	}
	else
		*error = true;
	return (local_write);
}

int32_t	pre_check(t_ffile fd, const char *format, ...)
{
	va_list	args;
	char	*str;

	va_start(args, format);
	if (ft_strchr(format, '%'))
	{
		ft_putendl_fd(format, fd);
		return (ft_strlen(format));
	}
	if (ft_strcmp(format, "%s\n"))
	{
		str = va_arg(args, char *);
		ft_putendl_fd(str, fd);
		return (ft_strlen(str) + 1);
	}
	return (0);
}

int32_t	ft_dprintf_int(t_ffile fd, const char *format, va_list args)
{
	int32_t	total_write;
	bool	error;

	total_write = pre_check(fd, format, args);
	if (total_write)
		return (total_write);
	while (format && *format)
	{
		if (*format == '%' && *(format + 1))
			total_write += inject(format, args, &error, fd);
		else
		{
			ft_putstrn_fd(format, fd, get_next(format, &error));
			total_write += get_next(format, &error);
		}
		format += get_next(format, &error);
	}
	if (error || !format)
		return (-1);
	return (total_write);
	
}

__attribute__ ((format (printf, 2, 3))) int32_t ft_dprintf(t_ffile fd, const char *format, ...)
{
	va_list	args;
	int32_t	result;

	va_start(args, format);
	result = ft_dprintf_int(fd, format, args);
	va_end(args);
	return (result);
}

__attribute__ ((format (printf, 1, 2))) int32_t	ft_printf(const char *format, ...)
{
	va_list	args;
	int32_t result;

	va_start(args, format);
	result = ft_dprintf_int(STDOUT_FILENO, format, args);
	va_end(args);
	return (result);
}
