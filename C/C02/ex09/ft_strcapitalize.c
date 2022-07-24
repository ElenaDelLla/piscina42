/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:03:31 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/21 15:16:52 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_uppercase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str -32;
	}
}

void	ft_lowercase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str = *str +32;
}

int	ft_is_symbol(char *str)
{
    if(*str < '0'){
        return (1);
    } else if(*str > '9' && *str < 'A'){
        return (1);
    } else if(*str > 'Z' && *str < 'a'){
        return (1);
    } else if(*str > 'z'){
        return (1);
    }
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*pointer;

	pointer = str;
	ft_uppercase(str);
	str++;
	while (*str != '\0')
	{
		while (ft_is_symbol(str))
		{
			str++;
			if (*str >= 'a' && *str <= 'z')
			{
				*str = *str - 32;
				str++;
			}
		}
		ft_lowercase(str);
		str++;
	}
	return (pointer);
}

/*int	main(void)
{
	char	str[] = "salut, comment tu v·as ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
