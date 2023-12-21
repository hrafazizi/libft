/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 23:41:32 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/21 21:10:55 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// dstsize: cha7l f ram
//dst hiya dak chi li3mr f ram
// src dak chi libghi i7ot 
size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t dst_len = ft_strlen(dst); // dak chi li 3amer
    size_t src_len = ft_strlen(src); // dak chi li bari i7ot
    
    // donc ila kant f ram 4 o galia fiha 2 rah kadb 
    // donc ghdi nrj3 lih dak chi li3tni
    if (dstsize <= dst_len)
    {
        return (src_len + dstsize);
    }
    int i ;
    int r ;
    i = 0; 
    r = dstsize - ft_strlen(dst);
    
    while (src[i] != '\0' && i + 1 < r)
    {
        dst[dst_len + i ] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';

    int t ;
    t = ft_strlen(src) - i;
    t = t + ft_strlen(dst);
    return (t);
    
}

// int main ()
// {
// char dst [] = "hraf";
// char src [] = "madrid";
// size_t dstsize = 24;
// int r = ft_strlcat(dst, src, dstsize);
// printf("%s", dst);
// return(0);
// }