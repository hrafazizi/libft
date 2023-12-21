/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:35:08 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/21 21:11:04 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_test(unsigned int i, char c)
{
    return c + 1;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) 
{
    size_t len;
    char *ptr;
    unsigned int i;
    char c;
    
    len = ft_strlen(s);   
    ptr = malloc(len + 1); 
    if (ptr == NULL)
        return NULL;
    i = 0;
    while (s[i] != '\0')
    {
        c = f(i, s[i]);
        ptr[i] = c; 
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

int main ()
{
    char *r;
    r = "aaaaaa";
    // ft_strmapi(r);
    printf("%s\n", ft_strmapi(r, &ft_test));
    
}



