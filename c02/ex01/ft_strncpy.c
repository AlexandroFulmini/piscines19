/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 12:48:53 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/12 18:22:07 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = -1;
	while (x++ < n)
	{
		if (src[x] == '\0')
			dest[x] = '\0';
		else
			dest[x] = src[x];
	}
	dest[x] = src[x];
	return (dest);
}
