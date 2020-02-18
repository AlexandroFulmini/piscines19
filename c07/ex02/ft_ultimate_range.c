/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 14:02:18 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/18 15:25:40 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (!(tab = malloc(max - min) * sizeof(int)))
		return (-1);
	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	while (i < max - min)
	{
		tab[i] = min;
		i++;
		min+;
	}
	*range = tab;
	return (i);
}
