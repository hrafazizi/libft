/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:45:09 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/14 23:28:51 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char *ft_strstr(const char *haystack, const char *needle)
{

    size_t i;
    int j;

    i = 0;
    j = 0;

    int check;

    while (haystack[i] != '\0')
    {
        j = 0;
        while (needle[j] != '\0' && haystack[i] == needle[j])
        {
            if (j == 0)
            {
                check = i;
            }
            i++;
            j++;
        }

        if (haystack[i] == '\0' && needle[j] != '\0')
        {
            return NULL;
        }

        if (needle[j] == '\0')
        {
            return (char *)&haystack[check];
        }

        i++;
    }

    return NULL;
}

int main()
{
    char *h = "achraf ist here mnot is";
    char *n = "is";

    char *r;

    r = strstr(h, n);


    if (r == NULL)
    {
        write(1, "ml9itoch\n", 10);
    }
    else
    {
        write(1, "l9ito\n", 7);
        printf("%s\n", r);
    }
    
    return 0;
}