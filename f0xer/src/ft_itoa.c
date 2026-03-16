/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:27:35 by toespino          #+#    #+#             */
/*   Updated: 2026/01/04 23:45:11 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static uint64_t	ft_lennbr(int32_t nbr)
{
	uint64_t	out;

	out = 0;
	if (nbr == -2147483648)
	{
		nbr /= 10;
		out++;
	}
	if (nbr < 0)
	{
		out++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		out++;
	}
	out++;
	return (out);
}

char	*ft_itoa(int32_t n)
{
	char		*out;
	uint64_t	len_nbr;
	int64_t		n_b;

	len_nbr = ft_lennbr(n);
	n_b = (int64_t)n;
	out = ft_calloc(len_nbr + 1, sizeof(char));
	if (!out)
		return (NULL);
	if (n < 0)
	{
		n_b *= -1;
		out[0] = '-';
	}
	len_nbr--;
	while (n_b > 9)
	{
		out[len_nbr] = (n_b % 10) + 48;
		n_b /= 10;
		len_nbr--;
	}
	out[len_nbr] = n_b + 48;
	return (out);
}
