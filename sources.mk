SRC_DIR = src/
PRT_SRCS_DIR = $(SRC_DIR)prints/

PRT_FILES = ft_putstr_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_printf.c

PRINT_SOURCES = $(addprefix $(PRT_SRCS_DIR), $(PRT_FILES))

SOURCES = $(PRT_SRCS_DIR)ft_putstr_fd.c $(PRT_SRCS_DIR)ft_putnbr_fd.c $(PRT_SRCS_DIR)ft_putchar_fd.c $(PRT_SRCS_DIR)ft_putendl_fd.c $(PRT_SRCS_DIR)ft_printf.c $(SRC_DIR)math.c $(SRC_DIR)basic_manipulation.c $(SRC_DIR)str_comparison.c #$(PRINT_SOURCES)
