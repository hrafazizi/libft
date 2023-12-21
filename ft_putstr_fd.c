/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:58:39 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/21 21:10:21 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    
    while (s[i] != '\0')
    {
        // write(fd, &s[i], 1);
        ft_putchar_fd(s[i], fd);
        
        i++;
    }
}
int main() 
{
    char *r;
    r = "achraf azizi real madrid";
    ft_putstr_fd(r, 1);
}