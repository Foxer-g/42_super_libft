/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:11:05 by toespino          #+#    #+#             */
/*   Updated: 2026/01/04 23:52:02 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	else if (!lst->next)
		return (1);
	else
		return (ft_lstsize(lst->next) + 1);
}
