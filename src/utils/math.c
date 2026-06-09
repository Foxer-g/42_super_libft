/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                              ⠀⢀⣀⣀⣛⡑⢶⣬⣭⢩⣶⣿⣷⣭⢻⣦⡀    */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 00:50:54 by rboutelo          #+#    #+#             */
/*   Updated: 2026/06/09 06:12:22 by neumann            ⠀⠀⠙⠛⠉⠀⠀⠀⠻⠿⠟           */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @doc min
// @kind func
// @desc Returns the smallest unsigned between a and b.
// @param a: uintmax_t, First number to compare.
// @param b: uintmax_t, Second number to compare.
// @returns uintmax_t, Minimum of a and b.
uintmax_t	min(uintmax_t a, uintmax_t b)
{
	if (a < b)
		return (a);
	return (b);
}

// @doc max
// @kind func
// @desc Returns the biggest unsigned between a and b.
// @param a: uintmax_t, First number to compare.
// @param b: uintmax_t, Second number to compare.
// @returns uintmax_t, Maximum of a and b.
uintmax_t	max(uintmax_t a, uintmax_t b)
{
	if (a > b)
		return (a);
	return (b);
}

// @doc nt_tablen
// @kind func
// @desc Returns the length of the null terminated tab tab.
// @param tab: void **, Null terminated tab to get the length of.
// @returns uintmax_t, length of tab.
uintmax_t	nt_tablen(void **tab)
{
	uintmax_t	len;

	len = 0;
	while (tab && tab[len])
		len++;
	return (len);
}
