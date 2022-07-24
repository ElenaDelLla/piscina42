/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosga <carlosga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:56:36 by carlosga          #+#    #+#             */
/*   Updated: 2022/07/23 12:34:50 by carlosga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	neg;

	n = 0;
	i = 0;
	neg = 1;
	while (i < ft_strlen(str))
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (!(str[i + 1] >= '0' && str[i] <= '9'))
				n = (n + (str[i] - 48));
			else
				n = (n + (str[i] - 48)) * 10;
		}
		else if (str[i] == '-' && str[i] && n == 0)
			neg = -neg;
		else if (str[i] != '+')
			break ;
		i++;
	}
		n = n * neg;
	return (n);
}
/*
int	main(int argc, char **argv)
{
	argc = 2;
	printf("%d", ft_atoi(argv[1]));
}
*/
