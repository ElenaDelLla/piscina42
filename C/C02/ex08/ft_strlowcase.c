/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:27:59 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/21 17:29:16 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_srtlowercase(char *str)
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

	printf("%s", ft_srtlowercase(srt));
	return (0);
}*/
