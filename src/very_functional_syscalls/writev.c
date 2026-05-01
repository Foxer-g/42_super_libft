/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 02:56:27 by rboutelo          #+#    #+#             */
/*   Updated: 2026/02/18 03:26:13 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_file.h"
#include "syscalls.h"

#ifdef AUTHORIZED_WRITEV

intmax_t	ft_writev(int fd, const t_iovec *iov, int cnt)
{
	const intmax_t	ret = writev(fd, iov, cnt);

	return (ret);
}
#else //AUTHORIZED_WRITEV

intmax_t	ft_writev(int fd, const t_iovec *iov, int32_t cnt)
{
	const uintmax_t	len = get_total_iov_len(iov, cnt);
	int32_t			i;
	char			*tmp;
	char			*otmp;
	intmax_t		res;

	if (cnt < 0)
		return (-1);
	tmp = malloc(len);
	if (!tmp)
		return (-1);
	otmp = tmp;
	i = 0;
	while (i < cnt)
	{
		ft_memcpy(iov[cnt].iov_base, tmp, iov[cnt].iov_len - 1);
		((char *)iov[cnt].iov_base)[iov[cnt].iov_len - 1] = '\0';
		i++;
		tmp += iov[cnt].iov_len;
	}
	res = write(fd, tmp, len);
	free(otmp);
	return (res);
}

#endif //AUTHORIZED_WRITEV
