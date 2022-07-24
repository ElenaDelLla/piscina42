/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosga <carlosga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:52:03 by maringar          #+#    #+#             */
/*   Updated: 2022/07/23 21:18:23 by carlosga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		c;

	if (val_nums(argc, argv[1]))
	{
		/* exe program */
	}
	else
		write(1, "Error", 5);




		

	validNumer(argc, argv);
	c = 0;
	if (argc == 2)
		while (argv[1] != '\0')
			str[c] = argv[1][c];
	else if (argv == 3)
		while (argv[2] != '\0')
			str[c] = argv[2][c];
}
