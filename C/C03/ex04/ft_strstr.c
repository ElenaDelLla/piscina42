/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:55:07 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/21 11:58:21 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	compare(char *str, char *to_find)
{								
	while (*str && *to_find)
	{	
		if (*str != *to_find)
		{
			return (0);
		}
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if ((*str == *to_find) && compare(str, to_find))
		{
			return (str);
		}
		str++;
	}	
	return (NULL);
}
/*int	main(void)
{
	char	str[] = "Marvin hola que tal";
	char	to_find[] = "hola";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}*/
