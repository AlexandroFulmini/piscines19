/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 11:24:24 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/12 19:05:16 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_strlowcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
		{
			str[x] += 32;
		}
		x++;
	}
	return (str);
}
