/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:32:03 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/25 20:51:59 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (!(dest = malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int					ft_strlen(char *src)
{
	int		i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*s_av;
	int				i;

	if (!(s_av = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (av[i] != 0 && i < ac)
	{
		s_av[i].size = ft_strlen(av[i]);
		s_av[i].str = av[i];
		s_av[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_av[i].size = 0;
	s_av[i].str = 0;
	s_av[i].copy = 0;
	return (s_av);
}
