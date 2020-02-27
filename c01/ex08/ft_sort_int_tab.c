/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 20:25:34 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/27 18:26:22 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int rev;

	size = size - 1;
	i = 0;
	while (i == 0)
	{
		j = 1;
		i = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				rev = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = rev;
				i = 0;
			}
			j++;
		}
	}
}
