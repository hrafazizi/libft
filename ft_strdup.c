/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:13:42 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/21 21:10:43 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
  char *p;
  int i ;
  i = 0;
  p = malloc(ft_strlen(s1) + 1);
  while (s1[i] != '\0')
  {
    p[i] = s1[i] ;
    i++;
  }
  p[i] = '\0';
  return(p);
}

int main ()
{
    char *r;
    r = ft_strdup("achraf real madrid");
    printf("%s\n", r);
}