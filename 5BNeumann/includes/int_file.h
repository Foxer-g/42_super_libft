/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_file.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutelo <rboutelo@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:14:41 by rboutelo          #+#    #+#             */
/*   Updated: 2026/03/11 00:35:11 by rboutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_FILE_H
# define INT_FILE_H
# include <fcntl.h>
# ifdef AUTHORIZED_READV
#  include <sys/uio.h>
# endif
# include "libft.h"
# include "syscalls.h"
// Values used in musl
# define UNGET 8
# define BUFSIZE 1024
# ifndef EOF
#  define EOF -1
# endif //EOF
// Permissions
# define F_PERM 1
# define F_NORD 4
# define F_NOWR 8
# define F_EOF 16
# define F_ERR 32
# define F_APP 128
# define WE 1
# define RE 0

typedef struct s_file	t_file;
typedef int				t_ffile;
typedef struct s_iovec	t_iovec;

struct		s_file
{
	uint32_t		flags;
	unsigned char	*rpos;
	unsigned char	*rend;
	int32_t			(*close)(struct s_file * file);
	unsigned char	*wpos;
	unsigned char	*wend;
	unsigned char	*wbase;
	uintmax_t		(*read)(struct s_file *, unsigned char *, uintmax_t);
	uintmax_t		(*write)(struct s_file *, const unsigned char *, uintmax_t);
	off_t			(*seek)(struct s_file * file, off_t offset, int whence);
	unsigned char	*buf;
	uintmax_t		buf_size;
	struct s_file	*next;	// Unused
	struct s_file	*prev;	// Unused
	t_ffile			fd;
	int32_t			mode;
	int32_t			lbf;
	char			*getln_buf;
};

struct s_fwritevars
{
	t_iovec		*iov;
	uintmax_t	rem;
	int32_t		iovcnt;
	intmax_t	cnt;
};

/*
 * Temporarily removed, they aren't currently implemented properly since the
 * whole ecosystem is required for them to work...
uintmax_t	libftio_read(struct s_file *file, unsigned char *buf, uintmax_t len);
void		reset_write_state(struct s_file *file);
uintmax_t	get_total_iov_len(const t_iovec *iov, uintmax_t cnt);
*/
void		append_file(t_ffile file);
void		remove_file(t_ffile file);
void		free_file(t_ffile file);
uintmax_t	get_total_iov_len(const t_iovec *iov, uintmax_t cnt);
#endif //INT_FILE_H