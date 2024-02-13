# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 14:27:22 by kquispe           #+#    #+#              #
#    Updated: 2024/02/13 15:41:36 by kquispe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game.out
SO_LONGH = ft_so_long.h

CCFLAGS = -Wall -Wextra -Werror
MLX_FLAGS = -L /usr/local/lib/ -lmlx
FW_FLAGS = -framework OpenGL -framework AppKit
LFT_FLAGS = -L libft/ -lft

MLX_FL_LX = -L mlx_linux/ -lmlx -lX11 -lXext -lm

SO := $(shell uname)
LFT_DIR = libft/
GNL_DIR = gnl/

SRC = ft_so_long.c ft_check_error.c ft_so_long_utils.c
OBJ = $(SRC:.c=.o)

# Apartado para linux
ifeq ($(SO),Linux)
	CMD_SO = gcc $(CCFLAGS) $(OBJ) $(LFT_FLAGS) $(MLX_FL_LX) -o $(NAME)
else
	CMD_SO = gcc $(CCFLAGS) $(OBJ) $(LFT_FLAGS) $(MLX_FLAGS) $(FW_FLAGS) -o $(NAME)
endif

all: libft gnl $(NAME)

$(NAME): $(OBJ) $(SO_LONGH)
	$(CMD_SO)
	
libft: $(LFT_DIR)/Makefile
	@make -C $(LFT_DIR)
gnl: $(GNL_DIR)

clean:
	@make -C $(LFT_DIR) clean
	@rm -f $(OBJ)
	
fclean:
	rm -f $(NAME)
	
re: fclean all

.PHONY: all libft fclean clean