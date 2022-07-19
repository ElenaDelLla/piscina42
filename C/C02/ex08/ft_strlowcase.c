/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:27:59 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/19 17:04:54 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_srtlowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (str);
}

/*int	main(void)
{
	char	srt[] = "HOLAMARVIN";
	char	*pointer = srt;
	ft_srtlowercase(srt);

	printf("%s\n", pointer);
	return (0);
}*/
