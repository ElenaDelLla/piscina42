/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:50:33 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/25 08:57:10 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{	
		c++;
		str++;
	}
	return (c);
}
/*int	main(void)
{
	char	*str = "Hola Marvin";

	printf("%d", ft_strlen(str));
}*/
