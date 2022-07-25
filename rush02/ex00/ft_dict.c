/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosga <carlosga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:45:34 by maringar          #+#    #+#             */
/*   Updated: 2022/07/24 21:15:47 by carlosga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_read_dic(char *dic)
{
	int	only_n;
	int	i;

	i = 0;
	only_n = 0;
	while (dic[i] != '\0')
	{
		if (dic[i] >= '0' && dic[i] <= '9')
			only_n = 1;
		else
		{
			only_n = 0;
			break ;
		}
		i++;
	}
	if (only_n == 0)
		return (dic);
	else
		return ("numbers.dict");
}

int	val_dict(char *dic)
{
	int	rt;

	rt = open(dic, O_RDONLY);
	return (rt);
}

int	ft_search_num(char *dict, char *num)
{
	int		i;
	int		j;
	int		rdic;
	int		size;
	char	dic[1024];

	i = 0;
	j = 0;
	size = ft_strlen(num);
	rdic = open(dict, O_RDONLY);
	read(rdic, &dic[i], 1);
	while (i < 1024)
	{
		printf("%d", i);
		read(rdic, &dic[i], 1);
		if (dic[i] == num[j])
			j++;
		else if (dic[i] != num[j])
			j = 0;
		if (j == (size - 1))
			break ;
		i++;
	}
	return (i);
}

char	*ft_name_num(char *num, char *dict)
{
	char	buffer[1024];
	char	*rt;
	int		i;
	int		j;
	int		dic;

	rt = (char *)malloc(sizeof(char) * 50);
	dic = open(dict, O_RDONLY);
	j = 0;
	i = ft_search_num(dict, num);
	while (buffer[i] != '\0')
	{
		read(dic, &buffer[i], 1);
		if (buffer[i] >= 'a' && buffer[i] <= 'z')
		{
			rt[j] = buffer[i];
			j++;
		}
		i++;
	}
	free(rt);
	return (rt);
}
