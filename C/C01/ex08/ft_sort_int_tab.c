/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:59:10 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/15 09:55:39 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	c;	

	c = 0;
	while (c < 10)
	{
		if (c > tab[size - 1 + c])
		{
			aux = tab[size - 1 + c];
			tab[size - 1 + c] = tab[c];
			tab[c] = aux;
		}
	}
	c++;
}
/*int	main(void)
{
	int *tab;
	int size;
	int temp[] = {1,2,5,9};
	int c;

	size = 4;
	tab = temp;
	ft_sort_int_tab(temp, size);
	while (c < size)
	{
		printf("tab[%d]\n" "es %d", c, temp[c]);
	}


}*/
