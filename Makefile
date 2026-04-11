# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutelo <rboutelo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 13:42:42 by rboutelo          #+#    #+#              #
#    Updated: 2025/10/21 11:26:54 by rboutelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include sources.mk
NAME	=	libft.a
INCLUDES = ./includes
BUILD_DIR = build/
OBJECTS = $(SOURCES:src/%.c=$(BUILD_DIR)%.o)
CFLAGS = -Wall -Werror -Wextra -ggdb
CC = cc

all: $(NAME)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME): $(BUILD_DIR) $(OBJECTS)
	ar rv $(NAME) $(OBJECTS)

clean:
	-rm -f $(OBJECTS)

fclean: clean
	-rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean hierarchical configure monolithic
