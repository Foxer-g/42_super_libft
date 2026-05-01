/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readv.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 02:02:37 by rboutelo          #+#    #+#             */
/*   Updated: 2026/03/01 05:01:16 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_file.h"

#ifdef AUTHORIZED_READV

intmax_t	ft_readv(int32_t fd, t_iovec *iov, uintmax_t cnt)
{
	const intmax_t	result = readv(fd, (struct iovec *)iov, cnt);

	return (result);
}
#else //AUTHORIZED_READV
// Not calling readv because it is not authorized but mine is still atomic

intmax_t	perform_read(t_ffile fd, uintmax_t len, char **buf)
{
	intmax_t	result;

	*buf = malloc(len);
	if (!*buf)
		return (-1);
	result = read(fd, (*buf), len);
	if (result < 0)
	{
		free(*buf);
		*buf = NULL;
		return (-1);
	}
	return (result);
}

intmax_t	ft_readv(t_ffile fd, t_iovec *iov, int32_t cnt)
{
	const uintmax_t	len = get_total_iov_len(iov, cnt);
	char			*tmp;
	const intmax_t	result = perform_read(fd, len, &tmp);
	int32_t			i;
	intmax_t		rem;

	if (cnt < 0 || result < 0)
		return (-1);
	rem = result;
	i = 0;
	while (i < cnt && rem > 0)
	{
		ft_memcpy(iov[cnt].iov_base, tmp, min(iov[cnt].iov_len, rem));
		tmp += iov[cnt].iov_len;
		rem -= min(iov[cnt].iov_len, result);
		i++;
	}
	free(tmp - len);
	return (result);
}
#endif //AUTHORIZED_READV
