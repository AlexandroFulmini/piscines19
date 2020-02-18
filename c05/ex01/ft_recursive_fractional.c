/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 10:04:45 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/17 10:32:23 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	n = nb;
	return (n * ft_recursive_factorial(nb - 1));
}
