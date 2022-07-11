/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:32:52 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/10 18:08:42 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	digitos(void)
{
	int		numero;
	char	ascii;

	numero = 0;
	while (numero <= 9)
	{
		ascii = numero + '0';
		write(1, &ascii, 1);
		numero ++;
	}
}
