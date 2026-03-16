/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:01:14 by toespino          #+#    #+#             */
/*   Updated: 2026/02/16 17:21:52 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdbool.h>
# include "ft_printf.h"

bool		ft_isalpha(int32_t c);
bool		ft_isdigit(int32_t c);
bool		ft_isalnum(int32_t c);
bool		ft_isascii(int32_t c);
bool		ft_isprint(int32_t c);
bool		ft_isspace(int32_t c);
bool		ft_issignednum(int32_t c);

uint64_t	ft_strlen(char *str);
void		*ft_memset(void *s, int32_t c, uint64_t n);
void		*ft_bzero(void *s, uint64_t n);
void		*ft_memcpy(void *dest, const void *src, uint64_t n);
void		*ft_memmove(void *dest, const void *src, uint64_t n);
uint64_t	ft_strlcpy(char *dest, const char *src, uint64_t size);
uint64_t	ft_strlcat(char *dest, const char *src, uint64_t size);
int32_t		ft_toupper(int32_t c);
int32_t		ft_tolower(int32_t c);
char		*ft_strchr(const char *s, int32_t c);
char		*ft_strrchr(const char *s, int32_t c);
int32_t		ft_strncmp(const char *s1, const char *s2, uint64_t n);
void		*ft_memchr(const void *s, int32_t c, uint64_t n);
int32_t		ft_memcmp(const void *s1, const void *s2, uint64_t n);
char		*ft_strnstr(const char *big, const char *little, uint64_t len);
int32_t		ft_atoi(const char *nptr);
void		*ft_calloc(uint64_t nmemb, uint64_t size);
char		*ft_strdup(const char *s);
char		*ft_substr(char *s, uint32_t start, uint64_t len);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strtrim(char *s1, char *set);
char		**ft_split(char *s, char c);
char		*ft_itoa(int32_t n);
char		*ft_strmapi(char *s, char (*f)(uint32_t, char));
void		ft_striteri(char *s, void (*f)(uint32_t, char *));
void		ft_putchar_fd(char c, int32_t fd);
void		ft_putstr_fd(char *s, int32_t fd);
void		ft_putendl_fd(char *s, int32_t fd);
void		ft_putnbr_fd(int32_t n, int32_t fd);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int32_t		ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiteri(t_list *lst, void (*f)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
