/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 12:01:56 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/12 18:02:35 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    *ft_strlowercase(char *str)
{
    int x;
    
    x = 0;
    while (str[x] != '\0')
    {
        if (str[x] >= 65 && str[x] <= 90)
        {
            str[x] += 32;
        }
        x++;
    }
    return(str);
}

char	*ft_strcapitalize(char *str)
{
    int x;
    
    x = 0;
    *ft_lowercase(str);
    while(str[x] != '\0')
    {
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[x] -= 32;
		}
		if (!(str[x] >= 65 && str[x] <= 90) && !(str[x] >= 97 && str[x] <= 122) && !(str[x] >= 48 && str[x] <=57))
		{
			if(str[x+1] >= 97 && str[x+1] <= 122)
			{
				str[x+1] -=32;
			}
		}
		x++;
    }
	return (str);
}
  
int		main(void)
{
	char *str;

	str = "salut les potes la s19school est trop bien";	
	printf("new : %s \n", ft_strcapitalize(str));
	return (0);
}
