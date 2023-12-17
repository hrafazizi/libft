/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:54:33 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/16 17:22:28 by acazizi          ###   ########.fr       */
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
    write(fd, "\n", 1);
}

#include <fcntl.h>

int main() 
{

    ft_putendl_fd("hraf madrid", 2);
    return 0;
}