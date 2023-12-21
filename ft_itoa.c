/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:47:11 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/21 21:09:31 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
  if ( p == NULL)
    return(NULL);
  while (s1[i] != '\0')
  {
    p[i] = s1[i] ;
    i++;
  }
  p[i] = '\0';
  return(p);
}

int ft_intlen(int a) // a = 258
{
    int i ;
    i = 0 ;
    if (a == 0)
        return(1);
    while(a != 0) // 258 != 0
    {
        a = a /10;   // a = 258 /10  = 25/10 = 2 / 2/10 = 0
        i++ ;   // i =  1 2 3 
    }
    return(i); // i = 0
}

char *ft_itoa(int n) // n = -258;
{
    char *a;
    int len;
    int i;
    int m;
    int ckeck_negative;
    
    if (n == -2147483648)
		return (ft_strdup("-2147483648"));
    
    ckeck_negative = 0;
    
    if (n < 0)  // n = -258
    {
        n = n * -1; // n = -258 * (-1) = 258
        ckeck_negative = 1; // db check_neg fih 1
    }
    
    len = ft_intlen(n) + ckeck_negative;  // len = 3 + 1 // len = 4  1lizadna ta3 /0
    a = malloc(len + 1);  // malloc(4 +1) = malloc(5) 
    if ( a == NULL ) // FAILURE
        return(NULL);
    i = len  - 1;  // i = 4 -1 //  i = 3 // i =2 // i = 1 // i = 0;
    while (ckeck_negative <= i)  // 1 <= 0
    {
        m = n % 10;   // m = 2%10 = 2 
        n = n / 10; // n = 2/10 = 0
        a[i] = m + '0';  // a[1] = 2 + 48 = 50 f char '2'
        i--; // i = 3 -1 // i =2 - 1 // i = 1 // i = 0
    }
    a[len] = '\0'; // a [4] = '\0'
    if (ckeck_negative == 1)
        a[0] = '-';
    return a;
}

int main()
{
    int a;

    a = -2147483648;
    char *str;
    
    str = ft_itoa(a);

    printf("%s\n", str);
    return 0;
}