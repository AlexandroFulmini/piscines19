/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 11:17:26 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/11 14:01:08 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_strupcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] -= 32;
		}
		x++;
	}
	return (str);
}
