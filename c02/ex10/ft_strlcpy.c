/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:25:42 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/12 17:13:55 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	y = 0;
	while (src[y])
	{
		y++;
	}
	if (size == 0)
	{
		return (y);
	}
	while ((src[x]) && (y < size - 1))
	{
		dest[x] = src[x];
		y++;
	}
	dest[x] = '\0';
	return (y);
}
