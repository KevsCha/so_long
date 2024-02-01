# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 14:27:22 by kquispe           #+#    #+#              #
#    Updated: 2024/02/01 15:46:13 by kquispe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game.out
SO_LONGH = ft_so_long.h

CCFLAGS = -Wall -Wextra -Werror
MLX_FLAGS = -L /usr/local/lib/ -lmlx
FW_FLAGS = -framework OpenGL -framework AppKit

SRC = ft_so_long.c ft_check_error.c ft_so_long_utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(SO_LONGH)
	gcc $(CCFLAGS) $(OBJ) $(MLX_FLAGS) $(FW_FLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)
	
fclean:
	rm -f $(NAME)
	
re: fclean all