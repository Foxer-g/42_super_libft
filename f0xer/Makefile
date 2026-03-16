CC = cc
CFLAGS = -Wextra -Wall -Werror 
NAME = libft.a
SRCDIR = src/
OBJDIR = build/
INCLUDE = -Iinclude
OBJ = ft_isalpha.o \
	ft_isdigit.o \
	ft_isalnum.o\
	ft_isascii.o\
	ft_isprint.o\
	ft_isspace.o\
	ft_issignednum.o\
	ft_strlen.o\
	ft_memset.o\
	ft_bzero.o\
	ft_memcpy.o\
	ft_memmove.o\
	ft_strlcpy.o\
	ft_strlcat.o\
	ft_toupper.o\
	ft_tolower.o\
	ft_strchr.o\
	ft_strrchr.o\
	ft_strncmp.o\
	ft_memchr.o\
	ft_memcmp.o\
	ft_strnstr.o\
	ft_atoi.o\
	ft_calloc.o\
	ft_strdup.o\
	ft_substr.o\
	ft_strjoin.o\
	ft_strtrim.o\
	ft_split.o\
	ft_itoa.o\
	ft_strmapi.o\
	ft_striteri.o\
	ft_putchar_fd.o\
	ft_putstr_fd.o\
	ft_putendl_fd.o\
	ft_putnbr_fd.o\
	ft_lstnew_bonus.o\
	ft_lstadd_front_bonus.o\
	ft_lstsize_bonus.o\
	ft_lstlast_bonus.o\
	ft_lstadd_back_bonus.o\
	ft_lstdelone_bonus.o\
	ft_lstclear_bonus.o\
	ft_lstiter_bonus.o\
	ft_lstmap_bonus.o\
	ft_printf.o\
	ft_putchar_f.o\
	ft_puthexa_f.o\
	ft_putnbr_f.o\
	ft_putptr_f.o\
	ft_putstr_f.o\
	ft_putunbr_f.o\

OBJS = $(addprefix $(OBJDIR), $(OBJ))

all : $(NAME)

$(OBJDIR):
	mkdir -p $@

$(NAME) : $(OBJS)
	$(AR) -rcs $(NAME) $(OBJS)

$(OBJDIR)%.o : $(SRCDIR)%.c | $(OBJDIR)
	$(CC) $(CFLAGS) $(INCLUDE) $< -c -o $@

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -f $(NAME)

re : fclean
	$(MAKE) all

.PHONY: all clean fclean re

