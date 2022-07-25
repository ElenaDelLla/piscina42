/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosga <carlosga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:52:03 by maringar          #+#    #+#             */
/*   Updated: 2022/07/24 18:52:09 by maringar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	char	*num;
	char	*name_dict;

	num = valid_argv(argc, argv);
	if (val_nums(num) > 0)
	{
		name_dict = ft_read_dic(argv[1]);
		if (val_dict(name_dict) > 0)
		{
			ft_main_program(num, name_dict);
		}
		else
			write(1, "Dict error\n", 11);
	}
	else
		write(1, "Error", 5);
}
