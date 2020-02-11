/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:12:28 by adenguir          #+#    #+#             */
/*   Updated: 2020/02/08 17:38:20 by adenguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_ligne(int x, char c1, char c2, char c3)
{
	int i;

	i = x;
	while (i > 0)
	{
		if (i == x)
			ft_putchar(c1);
		else if (i == 1)
			ft_putchar(c3);
		else
			ft_putchar(c2);
		i--;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = y;
	while (i > 0 && x > 0)
	{
		if (i == y)
			print_ligne(x, '/', '*', '\\');
		else if (i == 1)
			print_ligne(x, '\\', '*', '/');
		else
			print_ligne(x, '*', ' ', '*');
		i--;
	}
}
