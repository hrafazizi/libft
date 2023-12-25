/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:54:33 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/23 22:42:31 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int i;
    i = 0;
    
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);  
}

// int main ()
// {
//     char *s;
//     s = "achraf azizi real madrid";
//     ft_putendl_fd(s, 1);
//     // write(1, s, 1);  
// } 













// int main() 
// {
// char *s;
// s = "achrafaziziamdrid";
// ft_putendl_fd(s, 1);
// }