/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosga <carlosga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:49:09 by carlosga          #+#    #+#             */
/*   Updated: 2022/07/23 17:35:54 by maringar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

char	*ft_read_dic(int num)
{
	char	buffer[1024];
	char	*rt = malloc(sizeof(char)*10);
	int		dic;
	int		i;
	int		n;
	int		j;

	n = 0;
	i = 0;
	j = 0;
	dic = open("numbers.dict", O_RDONLY);
	if (dic > 0)
	{
		while (i < 1023)
		{
			read(dic, &buffer[i], 1);
			if (buffer[i] == '\n')
				n++;
			if (n == num)
			{
				while (buffer[i] >= 97 && buffer[i] <= 122)
				{
					rt[j] = buffer[i];
					i++;
					j++;
				}
			}
			else if (n > num)
				break ;				
		}
		i++;
	}
	else
		printf("error");
	return (rt);
}

int	main(void)
{
	printf ("%s", ft_read_dic(11));
}
