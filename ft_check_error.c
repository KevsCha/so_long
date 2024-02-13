/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:46:25 by kquispe           #+#    #+#             */
/*   Updated: 2024/02/13 19:05:18 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

int	message_error(int n)
{
	if (n == 1)
		printf("Error\nNumero de argumentos invalidos\n");
	else if (n == 2)
		printf("Error\nNo es un archivo '.ber'");
	else if (n == 3)
		printf("Error\nNo es un mapa valido");
	return (1);
}
//! ver la forma de que compruebe la extencion .ber
int	check_input(char *input)
{
	char	*str;
	
	if (!(str = ft_strchr(input, '.')))
		return (1);
	if (ft_strncmp(str, ".ber", sizeof(str)) != 0 || ft_strlen(str) != 4)
		return (1);
	return (0);
}
int	check_map_lines(int num_row, char *str_row)
{
	int	i;
	int start;
	char *temp;
	
	i = 0;
	//utilizar strchr para comparar el numero de caracteres de la primera y la ultima linea 
	//intetar comparar los caracteres de los costados si son muros
	if (!ft_strchr(str_row, '\n'))
		printf("%s", str_row);
	else
		printf("%d__%s", num_row, str_row);
	if (num_row == 1)
	{	
		start = ft_strlen(str_row);
		while (str_row[i] && str_row[i] == '1')
			i++;
	}
	
	
	return (0);
}
int	check_map(char *name_map)
{
	int	fd;
	int	i;
	char	*str_map;
	
	i = 0;
	fd = open(name_map, O_RDONLY);
	while ((str_map = get_next_line(fd)) != NULL)
	{
		
		if (check_map_lines(i, str_map) == 1)
			return (1);
		free(str_map);
		i++;
	}
	//error si el mapa es de 3 filas 
	if (i <= 2)
		return (1);
	return (0);
}
int	check_errors(int argc, char *argv)
{
	//evalua el numero de argumentos de entrada
	if (argc != 2)
		return (message_error(1));
	//Evalua el input si tiene la extencion correcta ".ber"
	if (check_input(argv) == 1)
		return (message_error(2));
	//Evalua si el mapa es rectangular
	if (check_map(argv) == 1)
		return (message_error(3));
	printf("\n[num de argms]: %d\n[Entrada]: %s", argc, argv);
	return (0);
}