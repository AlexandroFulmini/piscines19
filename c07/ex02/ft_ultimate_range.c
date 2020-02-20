/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 14:02:18 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/20 18:26:24 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int i;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		return (NULL);
		return (0);
	}
	if (!(*range = malloc(sizeof(**range) * diff)))
		return (-1);
	while (i < diff)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (diff);
}
