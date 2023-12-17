/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:08:01 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/11 17:05:37 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
// char *ft_strchr(const char *s, int c)
// {
// 	while (*s)
// 	{
// 		if (*s == (unsigned char)c)
// 			return (char *)s;
// 		s++;
// 	}
// 	return NULL;
// }

// void ft_putchar(char c)
// {
//   write(1, &c, 1);
// }

// int main ()
// {

//   // str, char // l9ito aola mali9itoch

//   char *ptr = "mohmmed\n";
//   char c = 'h';

//   int i = 0;

//    while (ptr[i] != '\0')
//    {
//     if (ptr[i] == c)
//     {
//       printf("l9ito\n");
//       return(0);
//     }

//     i++;

//   }

//   printf("mal9itoch\n");

// }

// return_type name param

char *ft_strchr(const char *s, int c)
{
  int i = 0;

  while (s[i] != '\0')
  {
    if (s[i] == c)
      return ((char *)&s[i]);
    i++;
  }
  return (NULL);
}

int main(void)
{
  char *r = "mari";
  char c = 'a';

  char *ptr = ft_strchr(r, c);

  printf("%s\n", ptr);
}