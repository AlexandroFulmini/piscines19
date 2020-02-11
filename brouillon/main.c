/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 20:09:32 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/06 09:57:48 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*int main ()
{
	int a;
	int b;

	a = 42;
	b = 19;
	printf("hello %d  world\n", a);
	printf("%d + %d", b, a);
}
*/

void ft_putchar(char c)

{
	write(1, &c, 1);
}

int main ()

{
	ft_putchar('k');
	return 0;
}
