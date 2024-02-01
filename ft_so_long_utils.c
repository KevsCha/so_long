/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:37:25 by kquispe           #+#    #+#             */
/*   Updated: 2024/02/01 15:41:01 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

char    *ft_strchr(const char *s, int c)
{
        size_t  i;
        char    *temp;

        i = 0;
        temp = (char *)s;
        while (temp[i])
        {
                if (temp[i] == (char)c)
                        return (temp + i);
                i++;
        }
        if (temp[i] == (char)c)
                return (temp + i);
        return (0);
}