/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 10:32:11 by toespino          #+#    #+#             */
/*   Updated: 2025/11/11 18:35:59 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar_f(char c);
int	ft_puthexa_f(unsigned int arg, int flag);
int	ft_putnbr_f(int n);
int	ft_putunbr_f(unsigned int n);
int	ft_putptr_f(unsigned long int arg);
int	ft_putstr_f(char *arg);

#endif