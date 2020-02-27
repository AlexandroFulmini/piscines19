/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:38:56 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/27 16:56:50 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 09:53:17 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/27 16:37:39 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_is_sep(char c, char *charset)
{
	int i;					//check si le char ou nous sommes est un sep!!!!

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_words(char *str, char *charset)		//compte le nombre de mots pour malloc total
{
	int		nbr_of_words;
	int		is_word;
	int		i;
	
	i = is_word = nbr_of_words = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset))
			is_word = 0;
		else if (!ft_is_sep(str[i], charset) && (is_word == 0))
		{
			is_word = 1;
			nbr_of_words++;
		}
		i++;
	}
	return(nbr_of_words);
}

int		ft_len_word(char *str, char *charset, int i)		//calcule la longueur de chaque mot
{
	int		len;

	len = 0;
	while (!ft_is_sep(str[i], charset) && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char 	**split;
	int 	len_word;
	int		i;
	int		j;

	i = 0;
	j = 0;
	split = malloc(sizeof(char*) * (ft_count_words(str, charset) + 1));
	while (i < ft_count_words(str, charset))
	{
		len_word = 0;
		while (ft_is_sep(str[i], charset) && str[j])
			j++;
		split = malloc(sizeof(char*) * ft_len_word(str, charset, j));
		while (len_word < ft_len_word(str, charset, j))
		{
			split[i][len_word] = str[len_word + j];
			len_word++;
		}
		split[i][len_word] = '\0';
		j = j + ft_len_word(str, charset, j);
		i++;
	}
	split[i] = 0;
	return (split);
}

int		main()	
{
	int 	i = 0;
	char 	str[] = "COUcou comment/ca/va t-il  ??";
	char	**split = ft_split(str, " /");

	while (split[i++])
		printf("%s \n", split[i]);
	
	return(0);
}

