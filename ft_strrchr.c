/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:42:35 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/05 00:39:43 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
   size_t sl;
   
   sl = ft_strlen(s);
   while (sl >= 0)
   {
    	if (s[sl] == c)
        	return ((char *)&s[sl]);
    	sl--;
   }
   return (NULL);
}
int main (void)
{
   char *hraf = "simo";
   int c = 'm';

   char *prt = ft_strrchr(hraf, c);


   
   // printf("%s")
}