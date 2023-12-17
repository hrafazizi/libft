/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 01:29:48 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/09 21:17:02 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>
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
int main()
{
char dst[] = "hraf";
char scr[] = "real";
size_t nbr = 4;
char *r;
r = ft_memcpy(dst, scr, 4);
printf("%s", r);
}
