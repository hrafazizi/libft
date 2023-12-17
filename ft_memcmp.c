/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:49:17 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/12 00:53:50 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    i = 0;
    char *a = (char *)s1;
    char *b = (char *)s2;
    
    while( i < n )
    {
        if( a[i] != b[i]) 
        {
            return (a[i] - b[i]);
        }
        i++;
    }
    return(0);
}
int main()
{
    char *a = "abcd";
    char *b = "rfcf";

    printf("%s\n", memmove(a,b, 4));
    // size_t n = 2;
    // int f = ft_memcmp(a, b, n);
    // printf("%d", f);
}