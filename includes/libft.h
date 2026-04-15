/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:45:16 by rboutelo          #+#    #+#             */
/*   Updated: 2026/04/08 03:03:16 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdarg.h>
# include <stdint.h>

typedef int	t_ffile;

uintmax_t	ft_strlen(const char *str);
int32_t		ft_strcmp(const char *s1, const char *s2);
char		*ft_strchr(const char *s, int32_t c);

/* ************************************************************************** */
/*                                   MEMORY                                   */
/* ************************************************************************** */
void    	ft_bzero(void *s, uintmax_t n);
void    	*ft_calloc(uint64_t nmemb, uint64_t size);
void	    ft_free(uintmax_t len, ...);
void	    ft_free_tab(uintmax_t len, ...);
void		*ft_memchr(const void *s, int32_t c, uintmax_t n);
int32_t	    ft_memcmp(const void *s1, const void *s2, uintmax_t n);
void    	*ft_memcpy(void *dest, const void *src, uintmax_t n);
void    	*ft_memmove(void *dest, const void *src, uintmax_t n);
void    	*ft_memset(void *s, int32_t c, uintmax_t n);

/* ************************************************************************** */
/*                                   PRINTS                                   */
/* ************************************************************************** */
int32_t		ft_putchar_fd(char c, t_ffile fd);
int32_t		ft_putstr_fd(const char *s, t_ffile fd);
int32_t		ft_putstr_fd_null(const char *s, t_ffile fd);
int32_t		ft_putstrn_fd(const char *s, int32_t fd, int32_t len);
int32_t		ft_putendl_fd(const char *s, t_ffile fd);
int32_t		ft_putendl_fd_null(const char *s, t_ffile fd);
int32_t		ft_putnbr_fd(int32_t n, t_ffile fd);
int32_t		ft_printf(const char *format, ...);
int32_t		ft_dprintf(t_ffile fd, const char *format, ...);

uintmax_t	min(uintmax_t first, uintmax_t second);

#endif
