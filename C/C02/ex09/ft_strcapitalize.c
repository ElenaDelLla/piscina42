/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:03:31 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/19 19:23:41 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_uppercase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str -32;
	}
}

void	ft_lowercase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str = *str +32;
}

char	*ft_strcapitalize(char *str)
{	
	ft_uppercase(str);
	str++;
	while (*str != '\0')
	{
		while ((*str >= 32 && *str <= 47) 
					|| (*str >= 58 && *str <= 64) 
					|| (*str >= 123 && *str <= 127))
			{
				str++;
				if (*str >= 'a' && *str <= 'z')
				{
					*str = *str - 32;
					str++;
				}
			}
			ft_lowercase(str);
			str++;
	}
	return (str);
}
/*
  int	main(void)
{
	char	str[] = "hola marvin";
	char	*pointer = str;
	ft_strcapitalize(str);

	printf("%s\n", pointer);
	return (0);
}
*/
