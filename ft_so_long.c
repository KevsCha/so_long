/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:30:39 by kquispe           #+#    #+#             */
/*   Updated: 2024/02/08 22:17:59 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

int main (int argc, char **argv)
{
	int	check;
	
	char *str = "hola perro como estas";
	
	printf ("%li", ft_strlen(str));
	
	if ((check = check_errors(argc, argv[1])) == 1)
		return (1);
	printf ("\nEstoy en el main");
	/*
	
	void *mlx_ptr;
	void *win_ptr;


	//inicia la coneccion con la minilibx y abre una ventana y mantiene la coneccion
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 800, 600, "mlx_42");
	mlx_loop(mlx_ptr);
	*/
	
	
	return (0);
}