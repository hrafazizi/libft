/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.C                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:13:30 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/17 01:35:09 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return(i);
}


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *r;
    int i ;
    size_t l;
    
    i = 0;
    l = ft_strlen(s);
    if (l - start < len)
    {
        len = l - start;
    }
   
    r = (char *)malloc(len + 1);
    if (r == NULL)
        return NULL;
    while (i < len)
    {
        r[i] = s[start];
        start++;
        i++;
    }
    r[i] = 0;
    return(r);
}

int main ()
{
    
    printf("%s\n", ft_substr("achrafazizimadrid", 6, 100));
    
}
