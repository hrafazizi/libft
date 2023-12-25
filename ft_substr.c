/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:13:30 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/25 20:12:11 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)// "achrafazizieral" 5
{
    size_t i ;
    size_t l;
    char *r;  
    
    i = 0;
    if(s == NULL)
        return(NULL);
        
    l = ft_strlen(s);
    if(start > l)
        return(ft_strdup(""));
    if (l - start < len)
        len = l - start;
    r = (char *)malloc(len + 1);
    if (r == NULL)
        return NULL;
    while (i < len)
    {
        r[i] = s[start];
        start++;
        i++;
    }
    r[i] = 0;
    return(r);
}

// int main ()
// {
//    char *a;
//    a = "achraf youssef";
//    char *t;
//    t = ft_substr(a, 8, 50);
//    printf("%s", t);
// }
// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }
// int main(){
//     	char *bullshit;
//         	char	str[] = "lorem ipsum dolor sit amet";
// 	    char	*strsub;
// 		// if (!(strsub = ft_substr(str, 400, 20)))
// 		// 	ft_print_result("NULL");
// 		// else
// 		// {
//             strsub = ft_substr(str, 400, 20);

//             printf("%s\n\n", strsub);
// 			bullshit = (char *)&strsub[30];
// 			bullshit = "FULL BULLSHIT";
// 			if (strsub)
// 				ft_print_result(strsub);
// 			else
// 				ft_print_result("rip");
// 		// }
// 		// if (str == strsub)
// 		// 	ft_print_result("\nA new string was not returned");
// 		// (void)bullshit;
        
	
// }
