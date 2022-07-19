/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:03:31 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/19 13:37:16 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			 *str = *str + 32;
			 str++;
		}
	}
	return (str);
}

char	ft_srtuppercase(char str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
		str++;
	}
	return (str);
}

int	ft_str_is_alpha(char str)
{
	if ((srt >= 32 && str <= 47) || (str >= 58 && str <= 46))
	{
		return (1);
	}
	else if (str >= 123 && str <= 126)
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{	
	int	c;

	c = 1;
	
}

int	main(void)
{
	char	str[] = "hola marvin";
	char	*pointer = str;
	ft_strcapitalize(str);

	printf("%s\n", pointer);
	return (0);
}
