/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:45:09 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/25 21:11:57 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    int j;

    i = 0;
    j = 0;

    int check;

    // puts(needle);
    if (needle == NULL || ft_strlen(needle) == 0)
        return ((char *)haystack);
    while (haystack[i] != '\0' && i < len)
    {
        j = 0;
        while (needle[j] != '\0' && haystack[i] == needle[j] && i < len)
        {
            if (j == 0)
                check = i;
            i++;
            j++;
        }
        if (haystack[i] == '\0' && needle[j] != '\0')
            return NULL;
        if (needle[j] == '\0')
            return (char *)&haystack[check];
        i++;
    }
    return NULL;
}

// int main()
// {
//     char *h = "lorem ipsum dolor sit amet";
//     char *n = "";

//     char *r;

//     r = strnstr(h, n, 10);


//     if (r == NULL)
//     {
//         write(1, "ml9itoch\n", 10);
//     }
//     else
//     {
//         write(1, "l9ito\n", 7);
//         printf("%s\n", r);
//     }
    
//     return 0;
// }

// void ft_print_result(const char *s)
// {

//     for (int i =0;s[i]; i++){
//         write(1, &s[i], 1);
//     }
//     write(1, "\n", 1);
// }



// int main(){
//     const char *str;
//     if (!(str = ft_strnstr(NULL, "", 10)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// }