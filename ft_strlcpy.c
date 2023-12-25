/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:47:05 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/24 00:01:05 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 
 size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
 {
  size_t i;

  i = 0;
  if (dstsize == 0)
    return(ft_strlen(src));
    
  while (src[i] != '\0' && i < dstsize - 1)
  {
    dst[i] = src[i];
    i++;
  }
    dst[i] = '\0';
  
  return(ft_strlen(src));
 }
 
//  int main (void)
//  {  
//   char	dest[];
    
//   printf("%zu\n,", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
//   printf("%s\n", dest);
  
//  }
 