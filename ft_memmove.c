/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 21:12:34 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/21 21:09:50 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void * dst, const void * src, size_t n)
{
    size_t i;
    i = 0;
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    while ( i < n)
    {
        d[i] = s[i];
        i++;
    }
    return(dst);
}
void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d= (char *) dst;
    char *s = (char *) src;

    if(s > d)
    {
        return(ft_memcpy(dst, src, len));
    }

    while(len > 0)
    {
        d[len - 1] = s[len - 1];
        len--;
    }
    return(dst);
}

int main()
{
char dst[]= "turttraokkkfma";
char src[]= "001000";
size_t n = 9;
char *r = ft_memmove(dst, src, n);
printf("%s\n", r);
}