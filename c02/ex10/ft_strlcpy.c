/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:25:42 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/12 19:33:42 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int srcsize;

	x = 0;
	srcsize = ft_strlen(src);
	while (x < size)
	{
		dest[x] = src[x];
		x++;
	}
	if (size > 0)
	{
		dest[x - 1] = '\0';
	}
	return (srcsize);
}
