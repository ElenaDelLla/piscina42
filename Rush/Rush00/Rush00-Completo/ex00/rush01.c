/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:39:08 by aortega-          #+#    #+#             */
/*   Updated: 2022/07/10 19:53:38 by lmontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	f;
	int	c;

	f = 1;
	while (f <= y && x > 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && f == 1) || (c == x && f == y))
				ft_putchar('/');
			else if ((c == 1 && f == y) || (c == x && f == 1))
				ft_putchar('\\');
			else if ((c == 1) || (c == x) || (f == 1) || (f == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		f++;
	}
}
