/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:31:51 by kquispe           #+#    #+#             */
/*   Updated: 2024/02/13 17:35:54 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SO_LONG_H
# define FT_SO_LONG_H

// esta biblioteca se cambia dependiendo el sistema operativo

#include <mlx.h>
#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>

typedef struct s_img
{
	
}	t_img;


typedef struct s_map
{
	int		weight;
	int 	heigth;
	int		row;
	int		column;
	char	**map;
	
}	t_map;


//FT_UTILS


//FT_SO_LONG
int	check_input(char *input);
int	message_error(int n);
int	check_errors(int argc, char *argv);
int	check_map(char *name_map);
int	check_map_lines(int row, char *str_row);

#endif