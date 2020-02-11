/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:18:52 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/11 19:30:56 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, umsigned int n)
{
	int x;

	x = 0;
	while ((s1[x] != '\0' && s2[x] != '\0') && ( x < n))
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] = s2[x]);
		}
		x++;
	}
	if (x == n )
	{
		return (0);
	}
	return (s1[x] - s2[x]);
}
