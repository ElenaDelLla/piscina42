/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:54:03 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/19 09:21:28 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{	
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			str++;
		}
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	str[20] = "HolaMarvin";
	
	printf("%d\n", ft_str_is_alpha(str));
}*/
