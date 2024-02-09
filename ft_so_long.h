/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:31:51 by kquispe           #+#    #+#             */
/*   Updated: 2024/02/08 21:27:15 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SO_LONG_H
# define FT_SO_LONG_H

#include "mlx_linux/mlx.h"
#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>

//FT_UTILS
char    *ft_strchr(const char *s, int c);

//FT_SO_LONG
int	check_input(char *input);
int	message_error(int n);
int	check_errors(int argc, char *argv);

#endif