SRC_DIR = src/
MEM_SRCS_DIR = $(SRC_DIR)mem_action/
PRT_SRCS_DIR = $(SRC_DIR)prints/

MEM_FILES = ft_bzero.c ft_calloc.c ft_free.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
PRT_FILES = ft_putstr_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_printf.c

MEM_SOURCES = $(addprefix $(MEM_SRCS_DIR), $(MEM_FILES))
PRINT_SOURCES = $(addprefix $(PRT_SRCS_DIR), $(PRT_FILES))

SOURCES = $(PRINT_SOURCES) $(MEM_SOURCES) $(SRC_DIR)basic_manipulation.c $(SRC_DIR)math.c $(SRC_DIR)str_comparison.c
