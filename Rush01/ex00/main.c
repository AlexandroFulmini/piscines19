/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 13:49:25 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/15 13:52:07 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int nb;
	nb = n;
	if (n < 0)
	{
		ft_putchar('-');
		nb = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_puthar(nb % 10 + '0');
}


