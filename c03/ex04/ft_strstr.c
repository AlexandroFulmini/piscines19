/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:52:21 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/13 15:44:45 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;
	while (to_find[x])
		x++;
	if (to_find[0] == '\0')
		return (str);
	while (str[y])
	{
		z = 0;
		while (to_find[z] && str[y + z] == to_find[z])
			z++;
		if (z == x)
			return (&str[y]);
		y++;
	}
	return (0);
}
