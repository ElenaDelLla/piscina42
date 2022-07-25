/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:01:04 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/25 15:01:14 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char *skip_blanks(char *str)
{
    while(*str != '\0' && *str == ' ')
    {
        *str++;    
    }
    return str;
}

int *calc_number(char *str)
{
    int res;
    res = 0;
    while(*str != '\0' && (*str >= '0' && *str <= '9'))
    {
        res = res * 10 + *str - '0';
        *str++;    
    }
    return res;
}

int ft_atoi(char *str)
{
    int res;
    int sign;
    
    sign = 1;     // Inicializamos signo a positivo
    str = skip_blanks(str); // nos saltamos los espacios del principio
    while(*str != '\0' && (*str == '-' || *str == '+')) // mientras encontremos '-' o '+' seguimos moviendo el puntero, cuando sea '-' actualizamos signo
    {
        if (*str == '-')
        {
            sign *= -1;
        }
        *str++;    
    }
    res = calc_number(str);
    return (sign * res); // Devolvemos resultado con su signo
}
/*int main()
{    
    char    str[] = "      -+--+--1233b32";

    printf("%d\n",ft_atoi(str));

    return 0;
}*/
