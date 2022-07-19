/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:15:28 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/19 17:11:12 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *srt)
{
	while (*srt != '\0')
	{
		if (*srt >= 'a' && *srt <= 'z')
		{
			*srt = *srt - 32;
		}
		srt++;
	}
	return (srt);
}
/*int	main(void)
{
	char	srt[] = "holamarvin";
	char	*pointer = srt;
	ft_strupcase(srt);

	printf("%s\n", pointer);
	return (0);
}*/
