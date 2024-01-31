# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 14:27:22 by kquispe           #+#    #+#              #
#    Updated: 2024/01/31 15:21:56 by kquispe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
SO_LONG = ft_so_long.h

CCFLAGS = -Wall -Wextra -Werror
SRC = 
OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ) $(SO_LONG)
	
clean:
	rm -f $(OBJ)
	
fclean:
	rm -f $(NAME)
	
re: fclean all