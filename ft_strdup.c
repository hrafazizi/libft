/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:13:42 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/16 00:52:35 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return(i);
}


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