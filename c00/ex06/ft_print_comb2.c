/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:58:08 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/06 19:42:38 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

void	ft_couple(int nb)
{
	ft_putchar(nb / 10 + '0');
	ft_putchar(nb % 10 + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_couple(a);
			ft_putchar(' ');
			ft_couple(b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			if (b == 99)
			{
				a++;
				b = a;
			}
			b++;
		}
	}
}
