/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 10:33:04 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/17 20:20:59 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int n;

	n = nb;
	if ((nb == 0) || (power == 0))
		return (1);
	if ((nb < 0) || (power < 0))
		return (0);
	while (power > 1)
	{
		nb = nb * n;
		power--;
	}
	return (nb);
}
