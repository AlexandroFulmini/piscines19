/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:41:10 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/18 14:52:41 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (!(tab = malloc(max - min) * sizeof(int)))
		return (0);
	if (min >= max)
		return (0);
	while (i < max - min)
	{
		tab[i] = min + 1;
		i++;
	}
	return (tab);
}
