type
  t_ffile* = cint
  int32_t = cint
  uint64_t = clong
  uintmax_t = csize_t

{.passL: "./libft.a".}
proc ft_strlen*(str: cstring): csize_t {.importc.}
proc ft_strcmp*(s1: cstring; s2: cstring): cint {.importc.}
proc ft_strchr*(s: cstring; c: cint): cstring {.importc.}

##  **************************************************************************
##                                    MEMORY
##  **************************************************************************

proc ft_bzero*(s: pointer; n: uintmax_t) {.importc.}
proc ft_calloc*(nmemb: uint64_t; size: uint64_t): pointer {.importc.}
proc ft_free*(len: uintmax_t) {.varargs, importc.}
proc ft_free_tab*(len: uintmax_t) {.varargs, importc.}
proc ft_memchr*(s: pointer; c: int32_t; n: uintmax_t): pointer {.importc.}
proc ft_memcmp*(s1: pointer; s2: pointer; n: uintmax_t): int32_t {.importc.}
proc ft_memcpy*(dest: pointer; src: pointer; n: uintmax_t): pointer {.importc.}
proc ft_memmove*(dest: pointer; src: pointer; n: uintmax_t): pointer {.importc.}
proc ft_memset*(s: pointer; c: int32_t; n: uintmax_t): pointer {.importc.}
##  **************************************************************************
##                                    PRINTS
##  **************************************************************************

proc ft_putchar_fd*(c: char; fd: t_ffile): int32_t {.importc.}
proc ft_putstr_fd*(s: cstring; fd: t_ffile): int32_t {.importc.}
proc ft_putstr_fd_null*(s: cstring; fd: t_ffile): int32_t {.importc.}
proc ft_putstrn_fd*(s: cstring; fd: int32_t; len: int32_t): int32_t {.importc.}
proc ft_putendl_fd*(s: cstring; fd: t_ffile): int32_t {.importc.}
proc ft_putendl_fd_null*(s: cstring; fd: t_ffile): int32_t {.importc.}
proc ft_putnbr_fd*(n: int32_t; fd: t_ffile): int32_t {.importc.}
proc ft_printf*(format: cstring): int32_t {.varargs, importc.}
proc ft_dprintf*(fd: t_ffile; format: cstring): int32_t {.varargs, importc.}
proc min*(first: uintmax_t; second: uintmax_t): uintmax_t {.importc.}
