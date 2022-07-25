/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:59:49 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/24 15:29:22 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int string_length(char *string){
    int length;
    length = 0;
    char	*ini;
    ini = string;
    while (*ini != '\0')
    	{
    	    ini++;
    	    length++;
    	}
    return length;
}

void copy(char *dest, char *src, unsigned int size){
    while (*src != '\0' && size > 1)
    {
        *dest = *src;
        dest++;
        src++;
        size--;
    }
}

char *goStringEnd(char *string){
    while (*string != '\0')
    {
        string++;
    }
    return string;
}

char *closeIfNeeded(char *dest, char* src, unsigned int size){
    if (size == 1 || *src == 0)
    {
        *dest = '\0';
    }
    return dest;
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    int  len;
    int  slen;
    len = string_length(dest);
    slen = 0;
    if(size>0)
    {
        slen = string_length(src);
        dest = goStringEnd(dest);
        size = size - len;
        while (*src != '\0' && size > 1)
        {
            *dest = *src;
            dest++;
            src++;
            size--;
        }
        dest = closeIfNeeded(dest, src, size);
    }
    return (slen + len);
}
/*int main(void)
{
    char    dest[] = "hol\0";
    char    src[] = "adios\0";
    unsigned int    size = 6;
    printf("%d\n", ft_strlcat(dest, src, size));
    printf("%s\n", dest);
    printf("%s\n", src);
    return(0);
}*/
