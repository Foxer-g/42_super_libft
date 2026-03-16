/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ffilelist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:59:22 by rboutelo          #+#    #+#             */
/*   Updated: 2026/03/01 04:41:44 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_file.h"

static t_ffile	*get_filelist(void)
{
	static t_ffile	filelist[FD_SETSIZE];

	return (filelist);
}

void	append_file(t_ffile file)
{
	t_ffile *const	filelist = get_filelist();
	uint32_t		i;

	i = 0;
	while (i <= FD_SETSIZE)
	{
		if (!filelist[i])
		{
			filelist[i] = file;
			return ;
		}
		i++;
	}
}

void	remove_file(t_ffile file)
{
	t_ffile *const	filelist = get_filelist();
	uint32_t		i;

	i = 0;
	while (i <= FD_SETSIZE)
	{
		if (filelist[i] == file)
		{
			filelist[i] = 0;
			return ;
		}
		i++;
	}
}

void	clear_filelist(void)
{
	t_ffile *const	filelist = get_filelist();
	uint32_t		i;

	i = 0;
	while (i <= FD_SETSIZE)
	{
		if (filelist[i])
			close(filelist[i]);
		i++;
	}
}
