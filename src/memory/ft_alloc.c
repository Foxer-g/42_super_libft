/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:31:48 by rboutelo          #+#    #+#             */
/*   Updated: 2026/03/20 01:07:48 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	new_ptr = malloc(size);
	ft_memcpy(new_ptr, ptr, ft_strlen(ptr));
	free(ptr);
	return (new_ptr);
}

void	*ft_calloc(uintmax_t nmemb, uintmax_t size)
{
	char	*ptr;

	if (size != 0 && nmemb > ((uintmax_t)-1 / size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return ((void *)ptr);
}
