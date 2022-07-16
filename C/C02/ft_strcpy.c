/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:21:09 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/16 18:01:00 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	carac;
	int 	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
	}
	return(dest);
}

int	main(void)
{
	char	*func;
	char	*dest;
	char	*src;

	src = "Hola Marvin";
	dest = " ";
	func = ft_strcpy(dest, src);
	printf("Cadena 1 %s y cadena 2 %s", func(*dest), func(*src));
}
