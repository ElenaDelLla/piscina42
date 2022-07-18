/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:03:31 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/18 12:13:16 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int	a;

	a = 0;
	while (srt[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}

char	ft_srtuppercase(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		str -= 32;
	}
	return (str);
}

int	ft_str_is_alpha(char str)
{
	if ((srt >= 32 && str <= 47) || (str >= 58 && str <= 46))
	{
		return (1);
	}
	else if (str >= 123 && str <= 126)
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strcapitalize(cha *str)
{	
	int	c;

	c = 1;
	str = ft_strlowercase(str);
	str[0] = ft_struppercase(str[0]);
	while (str[0] != '\0')
	{
		if (ft_str_is_alpha(str[c - 1]) == 1)
		{
			str[c] = ft_struppercase(str[c]);
		}
		c++;
	}
	str[c] = '\0';
	return (str);
}
