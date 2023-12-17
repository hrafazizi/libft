/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:40:16 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/11 17:58:33 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    int i ;
    i = 0 ;
    char *r = (char *)s;
    
    while(i < n)
    {
        if (r[i] == c)
        {
            return (&r[i]);
        }
        i++;
    }

    return (NULL);
}
int main ()
{
 char *r = "madrid";
 int c = 99;
 size_t n = 8;
 void *t = ft_memchr(r, c, n);
 printf("%s", t);
}




