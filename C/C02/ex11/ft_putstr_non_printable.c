/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:04:54 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/21 15:24:58 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_printable(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}

void	dec_to_hex(int n)
{
	char	*vec;
	int		mod;

	vec = "0123456789abcdef";
	mod = n % 16;
	write(1, &vec[n / 16], 1);
	write(1, &vec[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	a;

	while (*str != '\0')
	{
		if (ft_str_is_printable(*str))
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			a = *str;
			dec_to_hex(a);
		}
		str++;
	}
}
/*int	main()
{
	char src[] = "Coucou\ntu vas bien?";

	ft_putstr_non_printable(src);
	return (0);
}*/
