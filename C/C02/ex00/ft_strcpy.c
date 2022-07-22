/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:21:09 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/21 14:37:41 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
    char *temp;
    temp=dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
    return temp;
}

/*int    main(void)
{
    char    dest[20]="";
    char    src[20]="Hola Marvin";
    printf("Cadena 1 %s y cadena 2 %s\n", dest, src);
    printf("%s\n", ft_strcpy(dest, src));
    //printf("Cadena 1 %s y cadena 2 %s\n", dest, src);
}*/
