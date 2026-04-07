/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:41:33 by rboutelo          #+#    #+#             */
/*   Updated: 2026/04/08 01:48:04 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_putnbr_fd(int32_t n, int32_t fd)
{
	int32_t	result;
	int32_t	nb;

	result = 0;
	nb = n;
	if (n < 0)
	{
		result += ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		result += ft_putnbr_fd(nb / 10, fd);
	result += ft_putchar_fd(nb % 10 + '0', fd);
	return (result);
}
