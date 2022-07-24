/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:15:43 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/20 10:37:31 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int c;
    c = 0;
	while ((*s1 != '\0' || *s2 != '\0') && (c < n))
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s1 < *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
		c++;
	}
	return (0);
}

/*int main(void)
{
	unsigned int n;

	n = 3;
	char	s1[] = "holaque";
   	char	s2[] = "hola";

	printf("%d", ft_strncmp(s1, s2, n));
}*/
