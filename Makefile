# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 14:27:22 by kquispe           #+#    #+#              #
#    Updated: 2024/02/07 16:28:37 by kquispe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game.out
SO_LONGH = ft_so_long.h

CCFLAGS = -Wall -Wextra -Werror
MLX_FLAGS = -L /usr/local/lib/ -lmlx
FW_FLAGS = -framework OpenGL -framework AppKit

SO := $(shell uname)
LIBFT_DIR = libft/

SRC = ft_so_long.c ft_check_error.c ft_so_long_utils.c
OBJ = $(SRC:.c=.o)

# Apartado para linux
ifeq ($(SO),Linux)
	CMD_SO = gcc $(CCFLAGS) $(OBJ) -o $(NAME)
else
	CMD_SO = gcc $(CCFLAGS) $(OBJ) $(MLX_FLAGS) $(FW_FLAGS) -o $(NAME)
endif

all: libft

$(NAME): $(OBJ) $(SO_LONGH)
	$(CMD_SO)
	
libft: $(LIBFT_DIR)/Makefile
	@make -C $(LIBFT_DIR)

clean:
	@make -C $(LIBFT_DIR) clean
	@rm -f $(OBJ)
	
fclean:
	rm -f $(NAME)
	
re: fclean all

.PHONY: all libft fclean clean