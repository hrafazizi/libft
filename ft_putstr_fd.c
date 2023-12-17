/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:58:39 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/16 16:58:47 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    int i;
    i = 0;
    
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}

int main() 
{
    ft_putendl_fd("hraf madrid", 1);
    return 0;
}