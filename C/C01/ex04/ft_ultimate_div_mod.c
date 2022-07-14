/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:10:53 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/14 18:08:17 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
/*int main(void)
{
    int *a;
    int *b;
    int c;
    int d;
    
    c = 12;
    d = 4;
    a = &c;
    b = &d;
  i  
    ft_ultimate_div_mod(a, b);
	printf("El valor de los punteros es de a:  %d\n y de b:  %d\n", *a, *b);
}*/
