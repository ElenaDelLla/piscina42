/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_packs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosga <carlosga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:42:06 by maringar          #+#    #+#             */
/*   Updated: 2022/07/23 19:35:17 by carlosga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <header.h>

char	*ft_get_pack(char *str)
{
	int		c;
	int		size;
	char	*pack;

	pack = malloc(sizeof(char) * 10);
	size = ft_strlen(str);
	c = 0;
	if (size % 3 == 0)
	{
		while (c < 3)
		{
			pack[c] = str[c];
			c++;
		}
	}
	else
	{
		while (c < (size % 3))
		{
			pack[c] = str[c];
			c++;
		}
	}
	return (pack);
	free(pack);
}

char	*ft_rest_str(char *str)
{
	char	*newstr;
	int		size;
	int		c;
	int		r;

	newstr = malloc(sizeof(char) * 10);
	size = ft_strlen(str);
	c = 0;
	if (size % 3 == 0)
		r = 3;
	else
		r = size % 3;
	while (str[r] != '\0')
	{
		newstr[c] = str[r];
		r++;
		c++;
	}
	return (newstr);
	free(newstr);
}

int	main()
{	
	char	*str = "2324234";

	while (ft_strlen(str) > 0)
	{
		printf("%s\n", ft_get_pack(str));
		str = ft_rest_str(str);
	}
}
