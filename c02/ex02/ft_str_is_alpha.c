/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:43:25 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/11 19:41:23 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!((str[x] >= 65 && str[x] <= 90)
					|| (str[x] >= 97 && str[x] <= 122)))
			return (0);
		x++;
	}
	return (1);
}
