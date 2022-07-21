/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:31:37 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/21 15:21:53 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	t;

	c = 0;
	while (*src != '\0')
	{
		while (c < size)
		{
			*dest = *src;
			src++;
			dest++;
			c++;
			t = c;
		}
		src++;
	}
	return (t);
}
/*int	main(void)
{
	char				src[] = "adios";
	char				dest[20] = "Hola Marvini";
	unsigned	int		size;

	size = 10;
    printf("%d", ft_strlcpy(dest, src, size));
}*/
