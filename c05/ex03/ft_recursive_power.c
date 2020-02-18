/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:06:56 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/17 20:17:08 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if ((nb == 0) || (power == 0))
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	return (nb = nb * ft_recursive_power(nb, power - 1));
}
