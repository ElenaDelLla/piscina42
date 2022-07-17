/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:07:40 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/16 13:19:20 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char *str;
	int d;

	str = "hola....";
	printf("El numero de caracteres es: %d\n", ft_strlen(str));
	return(0);
}*/
