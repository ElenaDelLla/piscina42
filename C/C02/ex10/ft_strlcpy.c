/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:31:37 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/19 18:02:42 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int	c;
	unsigned	int	t;

	c = 0;
	while (*src != '\0')
	{
		while(c < size)
		{
			*dest = *src;
			src++;
			dest++; ;
			c++;
			t = c;
		}
		src++;
	}
	return (t);
}

/*int	main(void)
{
	char				src[] = "Hola Marvini";
	char				dest[20] = "";
	unsigned	int		size;

	size = 4;
	printf("%d\n", ft_strlcpy(dest, src, size));
}*/
