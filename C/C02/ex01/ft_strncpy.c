/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:06:02 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/24 20:16:15 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	char	*temp;

	i = 0;
	temp = dest;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (temp);
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
