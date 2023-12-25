/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:59:54 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/25 19:31:39 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    if (s1 == NULL || s2 == NULL)
        return (-1);
    
    while(i < n )
    {
        if( s1[i] != s2[i]) 
        {
            if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0)
                return -1;
            return 1;
        }
        i++;
    }
    return(0);
}

// int main()
// {    
//  int y;
//  y = ft_strncmp("test\200", "test\0", 6);
//     printf("%d", y);
// }