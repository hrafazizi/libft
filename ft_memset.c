/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:06:33 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/10 00:36:15 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    i = 0;
    unsigned char *str = (unsigned char *)b;
    
    while (i < len)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

// int main()
// {
//     char b[] = "achraf";
//     int c = 100;
//     size_t r = 3;
//     printf("%s", ft_memset(b, c, r));
// }
