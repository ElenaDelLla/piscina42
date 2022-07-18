/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:31:37 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/18 13:48:42 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	c;

	c = 0;
	while (c <= size)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	return ();
}
