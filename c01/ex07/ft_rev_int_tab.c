/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 16:05:13 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/11 09:27:13 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int y;
	int tabtempo[size];

	x = 0;
	y = size - 1;
	while (x < y)
	{
		tabtempo[x] = tab[size];
		x++;
		size--;
	}
	x = 0;
	while (x < y)
	{
		tab[x] = tabtempo[x];
		x++;
	}
}
