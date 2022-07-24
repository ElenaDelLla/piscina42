/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:38:49 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/24 19:54:36 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ini;
	unsigned int	c;

	ini = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	c = 0;
	while (*src != '\0' && c < nb)
	{
		*dest = *src;
		dest++;
		src++;
		c++;
	}
	*dest = '\0';
	return (ini);
}
/*int	main(void)
{
	char	dest[] = "hola";
	char	src[] = "12345";
	unsigned int	nb;

	nb = 7;
	printf("%s", ft_strncat(dest, src, nb));
}*/
