/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosga <carlosga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:56:36 by carlosga          #+#    #+#             */
/*   Updated: 2022/07/24 18:50:46 by maringar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0' && str[size] > 31 && str[size] < 127)
		size++;
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
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

char	*valid_argv(int argc, char **argv)
{
	char	*num;
	int		c;

	num = (char *)malloc(sizeof(char) * 50);
	c = 0;
	if (argc == 2)
	{
		while (argv[1][c] != '\0')
		{
			num[c] = argv[1][c];
			c++;
		}
	}	
	else if (argc == 3)
	{
		while (argv[2][c] != '\0')
		{
			num[c] = argv[2][c];
			c++;
		}
	}
	free(num);
	return (num);
}

int	val_nums(char *num)
{
	int	rt;
	int	i;

	i = 0;
	rt = 1;
	if (ft_strlen(num) > 39)
		rt = 0;
	while (num[i] != '\0')
	{
		if ((num[i] < 48 || num[i] > 57) && (num[i] > 31 && num[i] < 127))
		{
			rt = 0;
			break ;
		}
		i++;
	}
	return (rt);
}
