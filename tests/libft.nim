type
  t_ffile* = cint
  cint32 = cint

{.passL: "./libft.a".}
proc ft_strlen*(str: cstring): csize_t {.importc.}
proc ft_strcmp*(s1: cstring; s2: cstring): cint32 {.importc.}
proc ft_strchr*(s: cstring; c: cint32): cstring {.importc.}
proc ft_putchar_fd*(c: char; fd: t_ffile): cint32 {.importc.}
proc ft_putstr_fd*(s: cstring; fd: t_ffile): cint32 {.importc.}
proc ft_putstrn_fd*(s: cstring; fd: cint32; len: cint32): cint32 {.importc.}
proc ft_putendl_fd*(s: cstring; fd: t_ffile): cint32 {.importc.}
proc ft_putnbr_fd*(n: cint32; fd: t_ffile): cint32 {.importc.}
proc ft_printf*(format: cstring): cint32 {.varargs, importc.}
proc ft_dprintf*(fd: t_ffile; format: cstring): cint32 {.varargs, importc.}
proc min*(first: csize_t; second: csize_t): csize_t {.importc.}
