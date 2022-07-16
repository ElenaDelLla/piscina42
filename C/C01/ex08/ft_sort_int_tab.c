/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:59:10 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/15 09:55:39 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int        c;

    c = *b;
    *b = *a;
    *a = c;
}

void    ft_rev_int_tab(int *tab, int size)
{
    int        i;
    int        j;

    i = 0;
    j = size - 1;
    while (i < j)
    {
        ft_swap(&tab[i], &tab[j]);
        i++;
        j--;
    }
}

void    ft_sort_int_tab(int *tab, int size)
{
    int    i;

    i = 0;
    while (i < (size - 1))
    {
        if (tab[i] < tab[(i + 1)])
        {
            ft_swap(&tab[(i + 1)], &tab[i]);
            i = 0;
        }
        else
            i++;
    }
    ft_rev_int_tab(tab, size);
}
