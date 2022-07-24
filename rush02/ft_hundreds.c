/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundreds copy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosga <carlosga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:43:35 by maringar          #+#    #+#             */
/*   Updated: 2022/07/23 21:03:09 by carlosga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

char	*ft_hundreds(char *pack)
{
	int num;
	int nbr;
	char *hund = malloc(sizeof(char)*10);
	char *deci = malloc(sizeof(char)*10);
	char *uni = malloc(sizeof(char)*10);

	nbr = ft_atoi(pack);
	hund = ft_read_dic(nbr / 100);
	if ((nbr % 100) > 20)
	{
		num = num / 10;
		deci = ft_read_dic((nbr % 100) / 10);
		uni = ft_read_dic(nbr % 100 % 10);
		deci = ft_strcat(deci, uni);
	}
	else
		deci = ft_read_dic((nbr % 100) / 10);
	hund = ft_strcat(hund, " hundred ");
	hund = ft_strcat(hund, deci);
	return (hund);
}

int main(void)
{
	char pack[] = "111";
	printf("%s", ft_hundreds(pack));
}
