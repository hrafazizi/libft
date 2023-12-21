/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:13:30 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/21 21:11:25 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i ;
    size_t l;
    char *r;  
    
    i = 0;
    if(s == NULL) // !s   ===   s == null
        return(NULL);
        
    l = ft_strlen(s); 
    if (l - start < len)
        len = l - start;
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
   char *a;
   a = "achraf youssef";
   char *t;
   t = ft_substr(a, 8, 50);
   printf("%s", t);
}
