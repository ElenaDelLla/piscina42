/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:27:59 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/24 19:11:12 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*pointer;

	pointer = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (pointer);
}
/*int	main(void)
{
	char	srt[] = "HOLAMARVIN";

	printf("%s", ft_strlowcase(srt));
	return (0);
}*/
