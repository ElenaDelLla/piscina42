/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:05:22 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/16 13:20:21 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	temp;	

	c = 0;
	while (c < size / 2)
	{
		temp = tab [size - c - 1];
		tab [size - 1 - c] = tab [c];
		tab [c] = temp;
		c++;
	}
}

/*int	main(void)
{
	int size;
	int	aux[] = {1,2,3,4};
	int *tab;
	int c;

	size = 4;
	tab = aux;
	ft_rev_int_tab(aux, size);
	while (c < size)
	{
		printf("%d\n", aux[c]);
		c++;
	}
}*/
