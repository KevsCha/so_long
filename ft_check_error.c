/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:46:25 by kquispe           #+#    #+#             */
/*   Updated: 2024/02/01 16:10:30 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

int	message_error(int n)
{
	if (n == 1)
		printf("Error\nNumero de argumentos invalidos\n");
	else if (n == 2)
		printf("Error\nNo es un archivo '.ber'");
	return (1);
}
//! ver la forma de que compruebe la extencion .ber
int	check_input(char *input)
{
	char	*str;
	
	if (!(str = ft_strchr(input, '.')))
		return (1);
	while (*str)
	{
		printf("%c", *str);
		if (!ft_strchr(".ber", *str))
			return (1);
		str++;	
	}
	return (0);
}
int	check_errors(int argc, char *argv)
{
	if (argc != 2)
		return (message_error(1));
	if (check_input(argv) == 1)
		return (message_error(2));
	printf("\n[num de argms]: %d\n[Entrada]: %s", argc, argv);
	return (0);
}