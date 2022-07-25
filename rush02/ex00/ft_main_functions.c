/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosga <carlosga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:56:16 by maringar          #+#    #+#             */
/*   Updated: 2022/07/24 21:18:12 by carlosga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_main_program(char *str, char *dict)
{
	int		size;
	char	*zeros;
	char	*name;
	char	*pack;
	char	*hund;

	size = ft_strlen(str);
	while (size > 0)
	{
		pack = ft_get_pack(str);
		hund = ft_hundreds(pack, dict);
		zeros = get_zeros(str);
		name = ft_read_dic(zeros);
		hund = ft_strcat(hund, " ");
		name = ft_strcat(hund, name);
		str = ft_rest_str(str);
		size = ft_strlen(str);
	}
}

char	*get_zeros(char *str)
{
	int		j;
	int		size;
	int		size2;
	char	*zeros;
	char	*pack;

	zeros = (char *)malloc(sizeof(char) * 50);
	size = ft_strlen(str);
	pack = ft_get_pack(str);
	size2 = ft_strlen(pack);
	size -= size2;
	zeros[0] = '1';
	j = 1;
	while (j <= size)
	{
		zeros[j] = '0';
		j++;
	}
	free(zeros);
	return (zeros);
}
