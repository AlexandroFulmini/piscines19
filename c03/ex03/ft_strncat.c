/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:19:55 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/12 17:20:02 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int x;
	unsigned int y;
	
	x = 0;
	y = 0;
	while (dest[x])
		x++;
	while (y < nb && src[y])
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + j] = '\0';
	return(dest);
}
