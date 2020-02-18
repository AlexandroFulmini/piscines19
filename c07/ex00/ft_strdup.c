/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 11:59:33 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/18 12:40:54 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *ptr;
	int strlen;

	strlen = 0;
	while (src[strlen])
		strlen++;
	ptr = malloc((strlen + 1) * sizeof(char));
	strlen = 0;
	while (src[strlen])
	{
		ptr[strlen] = src[strlen];
		strlen++;
	}
	ptr[strlen] = '\0';
	return (ptr);
}
