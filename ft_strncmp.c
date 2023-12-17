/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:59:54 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/08 23:38:50 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    
    while( s1[i] != '\0' && s2[i] !='\0' && i < n )
    {
        if( s1[i] != s2[i]) 
        {
            if (s1[i] - s2[i] < 0)
                return -1;
            return 1;
        }
        i++;
    }
    return(0);
}

int main()
{    
 int y;
 y = ft_strncmp("abbb", "abbz", 4);
    printf("%d", y);
}