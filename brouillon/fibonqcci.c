/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonqcci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:10:48 by afulmini          #+#    #+#             */
/*   Updated: 2020/02/06 19:14:22 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	fibonacci(int i) {

	if(i == 0) {
		return 0;
	}

	if(i == 1) {
		return 1;
	}
	return fibonacci(i-1) + fibonacci(i-2);
}

int  main() {

	int i;
	   	
	for (i = 0; i < 10; i++) {
		printf("%d\t\n", fibonacci(i));
	}
		  	
	return 0;
}
