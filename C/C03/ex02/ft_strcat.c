/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:38:23 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/20 13:52:05 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ini;

	ini = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ini);
}
/*int	main(void)
{
	char	src[20] = "Hola";
	char	dest[20] = "15789";
	printf("%s\n", ft_strcat(dest, src));
	return 0;
}*/
