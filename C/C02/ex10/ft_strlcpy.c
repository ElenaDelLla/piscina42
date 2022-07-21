/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:31:37 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/21 18:17:57 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	t;

    c = 0;
	t = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	if (size != 0)
	{
		while (src[t] != '\0' && t < (size - 1))
		{
			dest[t] = src[t];
			t++;
		}
		dest[t] = '\0';
	}
	return (c);
}
int	main(void)
{
	char				src[] = "adios";
	char				dest[20] = "Hola Marvini";
	unsigned	int		size;

	size = 10;
    printf("%d", ft_strlcpy(dest, src, size));
}
