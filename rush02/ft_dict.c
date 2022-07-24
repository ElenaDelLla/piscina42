/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maringar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:45:34 by maringar          #+#    #+#             */
/*   Updated: 2022/07/23 13:45:47 by maringar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

char	*read_name_dict(int argc, char **argv)
{
	char	*name_dict;
	int		c1;

	if (argc == 3)
	{
		c = 0;
		while (argv[2][c] != '\0')
		{
			name_dict[c] = argv[2][c];
			c++;
		}
		return (name_dict);
	}
}

int	choose_dict(int argc, char **argv)
{
	int c;
	int dict

	unidad = 0;
	if (argc == 3)
	{
		int	dict;

		read_name_dict(argc, argv);
		dict = open(name_dict, O_RDONLY);
	}
	if (argc == 2)
	{
		dict = open("numbers.dict", O_RDONLY);
	}
	return(dict);
}
