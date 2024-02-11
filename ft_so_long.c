/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:30:39 by kquispe           #+#    #+#             */
/*   Updated: 2024/02/11 13:44:59 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

int main (int argc, char **argv)
{
	int	check;
	int x,y;

	if ((check = check_errors(argc, argv[1])) == 1)
		return (1);
	
	void *mlx_ptr;
	void *win_ptr;
	void *img_ptr;

	//inicia la coneccion con la minilibx y abre una ventana y mantiene la coneccion
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 1000, 1000, "mlx_42");
	
	img_ptr = mlx_xpm_file_to_image(mlx_ptr, "sprites/sprite2.xpm", &x, &y);
	if (img_ptr == NULL)
	{
		printf("\nno funciono la imagen");
		return (0);
	}
	mlx_put_image_to_window(mlx_ptr, win_ptr, img_ptr, 0, 0);
	
	mlx_loop(mlx_ptr);
	
	
	
	return (0);
}