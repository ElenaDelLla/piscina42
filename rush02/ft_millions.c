/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_millions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maringar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:56:16 by maringar          #+#    #+#             */
/*   Updated: 2022/07/23 19:56:18 by maringar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

char	*ft_hundreds(char *str)
{
	int i;
    int j;
    int size;
    int size2;
    char zeros;

    size = ft_strlen(str)
	while (size > 0)
    {
        pack = getpack(str);
        size2 = ft_strlen(pack);
        hund = ft_hundreds(pack);
        i = size - 1;
        zeros[0] = "1";
        j = 1;
        while (j <= i)
        {
            zeros[j] = "0";
            j++;
        }
        ft_read_dic(num);
        size -= size2;
    }


	hund = ft_read_dic(num);
	num = nbr % 100;
	if (num > 20)
	{
		n = num / 10;
		deci = ft_read_dic(num);
		num = num % 10;
		uni = ft_read_dic(num);
		deci = ft_strcat(deci, uni);
	}
	else
		deci = ft_read_dic(num);
	hund = ft_strcat(hund, deci);
	return (hund)
}