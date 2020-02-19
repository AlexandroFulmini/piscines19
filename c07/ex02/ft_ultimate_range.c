/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 14:02:18 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/19 11:08:27 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int i;

	i = 0;
	diff = max - min;
	if (!(tab = malloc(sizeof(**range) * diff)))
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (i < max - min)
	{
		*range[i] = min;
		i++;
		min+;
	};
	return (*range);
}
