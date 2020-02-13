/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 12:01:56 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/13 11:45:39 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int x;

	x = 0;
	ft_strlowercase(str);
	while (str[x])
	{
		if (!((str[x - 1] >= 65 && str[x - 1] <= 90) ||
					(str[x - 1] >= 97 && str[x - 1] <= 122) ||
					(str[x - 1] >= 48 && str[x - 1] <= 57)) &&
					(str[x] >= 97 && str[x] <= 122))
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
