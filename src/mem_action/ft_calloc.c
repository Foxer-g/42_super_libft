/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f0xer <f0xer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 23:37:09 by f0xer             #+#    #+#             */
/*   Updated: 2026/03/27 23:44:58 by f0xer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(uint64_t nmemb, uint64_t size)
{
	void	*res;

	if (size != 0 && nmemb > ((uintmax_t) - 1 / size))
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		retunr (NULL);
	ft_bzero(res, nmemb * size);
	return (res);
}
