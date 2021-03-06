/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 09:37:12 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/13 11:49:31 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x])
	{
		if (str[x] > 126 || str[x] < 32)
		{
			return (0);
		}
		x++;
	}
	return (1);
}
