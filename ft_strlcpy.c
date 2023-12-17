/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:47:05 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/11 16:25:29 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <string.h>
 #include <stdio.h>


size_t ft_strlen(const char *s)
{
    size_t  i;
    i = 0;
    while (s[i] != '\0')
            i++;
    return(i);
}
 
 size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
 {
  size_t i;

  i = 0;
  while (dst[i] != '\0' && src[i] != '\0' && i < dstsize - 1)
  {
    dst[i] = src[i];
    i++;
  }
    dst[i] = '\0';
  
  return(ft_strlen(src));
 }
 
 int main (void)
 {
  char dst[] = "simo";
  char src[] = "hraf";
  size_t dstsize = 4;
  size_t a;
  
  a = ft_strlcpy(dst, src, dstsize);
  printf("%zu\n,", a);
  printf("%zu\n", dstsize);
  
 }
 