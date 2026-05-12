type
  t_ffile* = cint
  int32_t = cint
  uint32_t = cuint
  uint64_t = culong
  uintmax_t = csize_t

const
  DEC_BASE* = "0123456789"
  HEX_LOW* = "0123456789abcdef"
  HEX_UPP* = "0123456789ABCDEF"

{.passL: "./libft.a".}
proc ft_isalpha*(c: int32_t): bool {.importc.}
proc ft_isdigit*(c: int32_t): bool {.importc.}
proc ft_isalnum*(c: int32_t): bool {.importc.}
proc ft_isascii*(c: int32_t): bool {.importc.}
proc ft_isprint*(c: int32_t): bool {.importc.}
proc ft_isspace*(c: int32_t): bool {.importc.}
proc ft_strlen*(str: cstring): uintmax_t {.importc.}
proc ft_strlen_until*(str: cstring; c: char): uintmax_t {.importc.}
proc extend*(to_extend: cstring; extender: cstring): cstring {.importc.}
proc ft_fwlen*(str: cstring): uint64_t {.importc.}
proc ft_memset*(s: pointer; c: int32_t; n: csize_t): pointer {.importc.}
proc ft_bzero*(s: pointer; n: csize_t) {.importc.}
proc ft_memcpy*(dest: pointer; src: pointer; n: csize_t): pointer {.importc.}
proc ft_memmove*(dest: pointer; src: pointer; n: csize_t): pointer {.importc.}
proc ft_strlcpy*(dst: cstring; src: cstring; dsize: csize_t): csize_t {.importc.}
proc ft_strlcat*(dst: cstring; src: cstring; dsize: csize_t): csize_t {.importc.}
proc ft_toupper*(c: int32_t): int32_t {.importc.}
proc ft_tolower*(c: int32_t): int32_t {.importc.}
proc ft_strchr*(s: cstring; c: int32_t): cstring {.importc.}
proc ft_strrchr*(s: cstring; c: int32_t): cstring {.importc.}
proc ft_strncmp*(s1: cstring; s2: cstring; n: int32_t): int32_t {.importc.}
proc ft_memchr*(s: pointer; c: int32_t; n: csize_t): pointer {.importc.}
proc ft_memcmp*(s1: pointer; s2: pointer; n: csize_t): int32_t {.importc.}
proc ft_strnstr*(big: cstring; little: cstring; len: csize_t): cstring {.importc.}
proc ft_atoi*(str: cstring): int32_t {.importc.}
proc ft_calloc*(nmemb: csize_t; size: csize_t): pointer {.importc.}
proc ft_realloc*(`ptr`: pointer; size: csize_t): pointer {.importc.}
proc ft_strdup*(s: cstring): cstring {.importc.}
proc ft_strndup*(s: cstring; n: uint64_t): cstring {.importc.}
proc ft_substr*(s: cstring; start: uint32_t; len: csize_t): cstring {.importc.}
proc ft_strjoin*(s1: cstring; s2: cstring): cstring {.importc.}
proc ft_strtrim*(s1: cstring; set: cstring): cstring {.importc.}
proc ft_split*(s: cstring; c: char): cstringArray {.importc.}
proc ft_itoa*(n: int32_t): cstring {.importc.}
proc ft_strmapi*(s: cstring; f: proc (a1: uint32_t; a2: char): char): cstring {.importc.}
proc ft_striteri*(s: cstring; f: proc (a1: uint32_t; a2: var cchar)) {.importc.}
proc ft_putchar_fd*(c: char; fd: t_ffile): int32_t {.importc.}
proc ft_putstr_fd*(s: cstring; fd: t_ffile): int32_t {.importc.}
proc ft_putstrn_fd*(s: cstring; fd: t_ffile; len: int32_t): int32_t {.importc.}
proc ft_putstr_fd_null*(s: cstring; fd: int32_t): int32_t {.importc.}
proc ft_putendl_fd*(s: cstring; fd: t_ffile): int32_t {.importc.}
proc ft_putendl_fd_null*(s: cstring; fd: int32_t): int32_t {.importc.}
proc ft_putnbr_fd*(n: int32_t; fd: t_ffile): int32_t {.importc.}
proc ft_putuint_base_fd*(n: uint64_t; base: cstring; fd: t_ffile; error: ptr bool): int32_t {.importc.}
proc ft_dprintf*(fd: t_ffile; format: cstring): int32_t {.varargs, importc.}
proc ft_printf*(format: cstring): int32_t {.varargs, importc.}
proc ft_strcmp*(s1: cstring; s2: cstring): int32_t {.importc.}
proc c_get_env*(name: cstring; env: cstringArray): cstring {.importc: "get_env".}
proc get_executable*(str: cstring): cstring {.importc.}
proc find_exec*(name: cstring; env: cstringArray): cstring {.importc.}
proc get_next_line*(fd: cint): cstring {.importc.}
proc min*(a: uintmax_t; b: uintmax_t): uintmax_t {.importc.}
proc free_nt_tab*(str: cstringArray; alloc_count: int32_t): pointer {.importc.}
proc nt_tablen*(tab: ptr pointer): int32_t {.importc.}
