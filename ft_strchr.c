/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:08:01 by acazizi           #+#    #+#             */
/*   Updated: 2023/11/10 22:01:53 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return (char *)s;
		s++;
	}
	return NULL;
}

//int main ()
//{
	//int a =15;
   // void * str ="ach01raf";

    // string
    // char s = 'a';// character
    // printf("%c %d %s %.2f   hhahahaha\n %s\n", s, 1, str,1.8, str);

    //  d = dicimal
    //  i = intiger
    //  c = character
    // s = string

  //printf("%s",ft_strchr(str, 255 + 49) );

//}