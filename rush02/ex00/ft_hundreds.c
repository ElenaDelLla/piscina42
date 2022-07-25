/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundreds.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosga <carlosga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:43:35 by maringar          #+#    #+#             */
/*   Updated: 2022/07/24 21:17:39 by carlosga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*int_to_char(int nbr)
{
	int		num;
	char	u;
	char	*c;	

	c = (char *)malloc(sizeof(char) * 50);
	if (nbr >= 20 || nbr == 10)
	{
		num = (nbr / 10);
		c[0] = num + 48;
		c = ft_strcat(&c[0], "0");
	}
	else if (nbr > 10 && nbr < 20)
	{
		num = (nbr / 10);
		c[0] = num + 48;
		u = ((nbr % 10) + 48);
		c = ft_strcat(&c[0], &u);
	}
	else
		c[0] = (nbr + 48);
	return (c);
}

char	*ft_hundreds(char *pack, char *dict)
{
	int		nbr;
	char	*c;
	char	*hund;
	char	cent;

	nbr = ft_atoi(pack);
	nbr = (nbr / 100);
	c = int_to_char(nbr);
	cent = c [0];
	hund = ft_name_num(&cent, dict);
	c = int_to_char(nbr % 100);
	hund = ft_name_num(c, dict);
	c = int_to_char(nbr % 100 % 10);
	hund = ft_name_num(c, dict);
	c = ft_name_num(c, dict);
	hund = ft_strcat(hund, " hundred ");
	hund = ft_strcat(hund, c);
	return (hund);
}
