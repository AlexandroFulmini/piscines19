/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 20:46:44 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/27 19:38:21 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int total;

	i = 0;
	j = 0;
	total = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	total += i;
	while (src[j])
		j++;
	total += j;
	if (i == size)
		return (total);
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[i];
		j++;
	}
	dest[i + j] = '\0';
	return (total);
}
