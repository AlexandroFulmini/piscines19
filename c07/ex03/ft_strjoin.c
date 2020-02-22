/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:17:10 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/22 15:39:52 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest)
}

int		ft_totalen(int size, char **strs, char *sep)
{
	int i;
	int total;
	
	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + strlen(str[i]);
		i++;
	}
	total = total + (size - 1) * strlen(sep) + 1;
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int *dest;

	i = 0;
	if (size < 0)
		return(0);
	if (size == 0)
	{
		dest = malloc(sizeof(char));
		dest[i] = '\0';
		return (dest);
	}
	if (!(dest = malloc(sizeof(strlen + 1) * 
}

int		
