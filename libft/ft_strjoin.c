/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:25:05 by kquispe           #+#    #+#             */
/*   Updated: 2024/02/13 14:19:30 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		len1;
	int		len2;
	int		i;
	int		j;
	char	*strtot;

	i = -1;
	j = -1;
	if (!s1)
	{
		s1 = ft_calloc(1, sizeof(char));
		if (!s1)
			return (NULL);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strtot = (char *)ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!strtot)
		return (free(s1), NULL);
	while (++i < len1)
		strtot[i] = s1[i];
	while (++j < len2)
		strtot[i + j] = s2[j];
	return (free(s1), strtot);
}
/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*strtot;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strtot = (char *)malloc(len1 + len2 + 1);
	if (strtot == NULL)
		return (NULL);
	while (i < len1 + len2)
	{
		if (i < len1)
			strtot[i] = *s1;
		if (i < len2)
			strtot[i + len1] = *s2;
		s1++;
		s2++;
		i++;
	}
	strtot[i] = '\0';
	return (strtot);
}
*/
