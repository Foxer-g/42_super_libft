/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:30:46 by toespino          #+#    #+#             */
/*   Updated: 2026/01/04 23:47:43 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(uint64_t nmemb, uint64_t size)
{
	uint64_t	mas;
	void		*res;

	if (nmemb > 0 && size > ((uint64_t) - 1) / nmemb)
		return (0);
	mas = nmemb * size;
	res = malloc(mas);
	if (!res)
		return (NULL);
	ft_bzero(res, mas);
	return (res);
}
