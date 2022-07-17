/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:36:08 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/17 18:37:26 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	pos;
	int	con;

	post = 0;
	con = 0;
	if (src[pos] == '\0')
		return (1);
	while (src[pos] != '\0')
	{
		if (src[pos] > '0' || src[pos] < '9' )
		{
			return (1);
		}
		pos++;
	}
	return (0);
}
