/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:19:06 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/08 14:40:14 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush(int x, int y)
{
	int width;
	int length;
	width = x;
	length = y;

	while ( width > 0)
	{
		while ( length > 0 )
		{
			ft putchar(1);
			y--;
		}
	x--;
	}
}
			/*if ( x == 1 || y == 1)
			{
				ft_putchar('/');
				x--;
				y--;
			}
			else
			{
				ft_putchar()
			}*/
		}
}	
