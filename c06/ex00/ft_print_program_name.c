/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 09:40:43 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/18 17:54:46 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;		
	}
}

int		main(int argc, char **argv)
{
	int i;
	
	i = 0;
	(void)argv;
	while (argv[0])
	{
		ft_pustr(argv[0]);
	}
	ft_putchar('\n');
}
