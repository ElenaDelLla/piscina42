/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:59:49 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/21 13:50:20 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*ini;
	int		c;

	ini = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	c = 0;
	while (*src != '\0' && c < size)
	{
		*dest = *src;
		dest++;
		src++;
		c++;
	}
	*dest = '\0';
	c = 0;
	while (*ini != '\0')
	{
		ini++;
		c++;
	}
	return (c);
}
/*int main(void)
{
	char	dest[] = "hola";
	char	src[] = "adios";
	unsigned int	size = 3;

	printf("%d", ft_strlcat(dest, src, size));
}*/
