/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:06:02 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/19 08:59:27 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "";
	char	src[20] = "Hola Marvin";
	int		n;
	
	printf("Cadena 1: %s y cadena 2: %s\n", dest, src);
	n = 3;
	ft_strncpy(dest, src, n);
	printf("Cadena 1: %s y cadena 2: %s\n", dest, src);
}*/
