/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 09:45:41 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/14 14:24:20 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int x;
	int posorneg;
	int result;

	x = 0;
	posorneg = 1;
	result = 0;
	while ((str[x] == '\t') || (str[x] == '\n')
			|| (str[x] == '\r') || (str[x] == '\v')
			|| (str[x] == '\f') || (str[x] == ' '))
		x++;
	while ((str[x] == '+') || (str[x] == '-'))
	{
		if (str[x] == '-')
			posorneg = posorneg * -1;
		x++;
	}
	while (str[x] >= 48 && str[x] <= 57)
	{
		result = result * 10 + str[x] - 48;
		x++;
	}
	result = result * posorneg;
	return (result);
}

int		main()
{
	char str[50] = "  ----+38478 friends";
	ft_atoi(str);
	printf(" %d \n" , ft_atoi(str));
}
