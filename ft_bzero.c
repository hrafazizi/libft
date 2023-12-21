/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:11:39 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/21 21:09:10 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;
    char *str = (char *)s;
    if( n == 0 )
        return;
    
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}

// int main(void)
// {
//     int a = 32111515;

//     ft_bzero(&a, 3);

//     //16777216
    
//     printf("%d\n", a);


//     int b = 5;


//     char g = (char)b;


//     float f = (float)g;
// }