/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:45:16 by rboutelo          #+#    #+#             */
/*   Updated: 2026/04/08 01:50:10 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdint.h>

typedef int	t_ffile;

uintmax_t	ft_strlen(const char *str);
uintmax_t	ft_strcmp(char *s1, char *s2);
char		*ft_strchr(const char *s, int32_t c);

int32_t	ft_putchar_fd(char c, t_ffile fd);
int32_t	ft_putstr_fd(const char *s, t_ffile fd);
int32_t	ft_putstrn_fd(const char *s, int32_t fd, int32_t len);
int32_t	ft_putendl_fd(const char *s, t_ffile fd);
int32_t	ft_putnbr_fd(int32_t n, t_ffile fd);
int32_t	ft_printf(const char *format, ...);
int32_t	ft_dprintf(t_ffile fd, const char *format, ...);

int32_t	min(int32_t first, int32_t second);

#endif
