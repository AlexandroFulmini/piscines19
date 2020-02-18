/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 20:18:54 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/17 20:15:58 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int x;
	int nbr;

	nbr = nb;
	x = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (x < nb)
	{
		nbr = nbr * x;
		x++;
	}
	return (nbr);
}
