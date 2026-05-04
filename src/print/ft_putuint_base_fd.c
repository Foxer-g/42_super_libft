/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_putuint_base_fd.c                                       _             */
/*                                                            _ \'-_,#        */
/*   By: neumann </var/spool/mail/neumann>                   _\'--','`|       */
/*                                                           \`---`  /        */
/*   Created: 2026/05/04 04:57:33 by neumann                  `----'`         */
/*   Updated: 2026/05/04 04:57:33 by neumann                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_putuint_base_fd(uint64_t n, char *base, t_ffile fd, bool *error)
{
	int32_t		result;
	uint64_t	base_length;

	result = 0;
	base_length = ft_strlen(base);
	if (n >= base_length)
		result += ft_putuint_base_fd(n / base_length, base, fd, error);
	result += ft_putchar_fd(base[n % base_length], fd);
	return (result);
}
