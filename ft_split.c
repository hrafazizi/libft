/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:22:41 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/25 20:45:01 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

// s = "achrafazizi"
// char c = 'z'

char *ft_create_str(char c)
{
    char *tmp_str;

    tmp_str = malloc(2);
    if (tmp_str == NULL)
        return NULL;
    tmp_str[0] = c;
    tmp_str[1] = '\0';

    return tmp_str;
}

int ft_countstr(const char *s, char c)
{
    int numbre_of_words;
    int i;

    numbre_of_words = 0;
    i = 0;
    if (s == NULL || s[0] == '\0')
        return (0);
    while (s[i] != '\0')
    {
        if (s[i] == c && s[i - 1] != c)
            numbre_of_words++;
        i++;
    }
    return (numbre_of_words + 1);
}

int ft_malloc_words(char **ptr, char *s, char c) // ptr = [0, 0, 0 ,0] | s ="abczzdszgggg" | c = 'z'
{
    int numbre_of_words;
    int i;
    int lenght_of_word;

    numbre_of_words = 0;
    lenght_of_word = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c && s[i - 1] != c)
        {
            ptr[numbre_of_words] = ft_calloc(lenght_of_word + 1, 1);
            if (ptr[numbre_of_words] == NULL)
                return 0;
            lenght_of_word = 0;
            numbre_of_words++;
        }
        else if (s[i] != c)
            lenght_of_word++;
        i++;
    }
    ptr[numbre_of_words] = ft_calloc(lenght_of_word + 1, 1);
    if (ptr[numbre_of_words] == NULL)
        return 0;
    return 1;
}

void ft_fill_ptr(char **ptr, char *s, char c)
{
    int numbre_of_words;
    int i;
    int lenght_of_word;

    numbre_of_words = 0;
    lenght_of_word = 0;
    i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c && s[i - 1] != c)
        {
            lenght_of_word = 0;
            numbre_of_words++;
        }
        else if (s[i] != c)
        {
            ptr[numbre_of_words][lenght_of_word] = s[i];
            lenght_of_word++;
        }
        i++;
    }
}

char **ft_split(char const *s, char c) // s = zzzzzabczzdszggggzzzz | c = 'z'
{
    int nbr_of_words;
    char **ptr;
    char *tmp_str;
    char *str;

    tmp_str = ft_create_str(c); // tmp_str = "z\0"
    if (tmp_str == NULL)
        return 0;
    str = ft_strtrim(s, tmp_str);        // s = zzzzzabczzdszggggzzzz| tmp_str = "z" ===> str =  abczzdszgggg

    nbr_of_words = ft_countstr(str, c);
    ptr = (char **)ft_calloc(nbr_of_words + 1, sizeof(char *)); // ptr = (char **)ft_calloc(3 + 1, 8) = (char **)ft_calloc(4, 8) => ptr = [0, 0, 0, 0]
    if (ptr == NULL)
        return NULL;
    ft_malloc_words(ptr, str, c);
    ft_fill_ptr(ptr, str, c);
    free(tmp_str);
    return ptr;
}

// need to free all reserved memory if calloc failure it
// int main()
// {

//     char *s = "zzzzzzzachrafaziihghjghjghgzzzzzzzz11212z";
//     char c = 'z';
   
//     char **ptr = ft_split(s, c);
//     int i = 0;
//     while (ptr[i] != NULL)
//     {
//         printf("====> |%s|\n", ptr[i]);
//         i++;
//     }

//     return 0;
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
//     char	**tabstr;
// 	int		i =0;


//     if (!(tabstr = ft_split("          ", ' ')))
//         ft_print_result("NULL");
//     else
//     {
//         while (tabstr[i] != NULL)
//         {
//             ft_print_result(tabstr[i]);
//             write(1, "\n", 1);
//             i++;
//         }
//     }
    
    // if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
	// 		ft_print_result("NULL");
	// 	else
	// 	{
	// 		while (tabstr[i] != NULL)
	// 		{
	// 			ft_print_result(tabstr[i]);
	// 			write(1, "\n", 1);
	// 			i++;
	// 		}
	// 	}
// }