/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 01:01:52 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/23 22:41:37 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if(c >= '0' && c <='9')
    	return(1);
	return(0);
}

 int ft_atoi(const char *str)
{
    int i;
    int s;
    int one;

    i = 0 ;
    s = 0;
    one = 1;
    
    if (str[0] == '-' || str[0] == '+')
    {
        if (str[0] == '-')
            one =  -1;
        i++;
    }
   while (str[i] != '\0' && ft_isdigit(str[i]))
   {
        s = (s * 10) + (str[i] - '0');
        i++;
   }
   return(s * one);
}

// int main ()
// {
//     int a;
//     int b;
    
//     a = ft_atoi(NULL);
//     // b = atoi(NULL);

//     printf("%d\n", a);
//     // printf("%d\n", b);

// }
