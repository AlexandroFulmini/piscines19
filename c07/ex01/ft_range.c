/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:41:10 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/25 20:15:55 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		size;
	int		i;
	int		j;
	
	if (min >= max)
		return (0);
	size = max - min;
	if (!(tab = malloc((size) * sizeof(int))))
		return (0);
	i = 0;
	j = min;
	while (j < size)
	{
		tab[i] = j;
		i++;
		j++;
	}
	return (tab);
}
