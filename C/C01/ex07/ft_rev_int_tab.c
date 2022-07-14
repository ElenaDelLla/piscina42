/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:05:22 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/14 19:20:29 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int vec[size];
	int c;
	int temp;

	c = 0;
	while (*tab < size/2)
	{
		temp = vec[size];
		vec[c] = vec[size -1 -c];
		vec[size - 1 - c] = temp;

		c++;		
	}
}

int	main(void)
{
	int size;
	int	aux[] = {1,2,3,4};
	int *tab;
	int c;

	size = 4;
	tab = aux;
	while (c > 0)
	{
		printf();
	}
	ft_rev_int_tab(tab, size);
}
