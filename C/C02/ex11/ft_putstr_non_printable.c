/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:04:54 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/24 15:04:26 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*cifras;

	cifras = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print('\\');
			print(cifras[(unsigned char)str[i] / 16]);
			print(cifras[(unsigned char)str[i] % 16]);
		}
		else
			print(str[i]);
		i++;
	}
}
