/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:36:08 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/21 14:40:21 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
		{
			str++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str[20] = "1489";

	printf("%d\n", ft_str_is_numeric(str));
}*/
