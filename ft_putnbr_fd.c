/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 23:52:05 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/24 19:23:11 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if ( n == -2147483648)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd('2', fd);
        n = 147483648; 
    }
    if (n < 0) 
    {
       ft_putchar_fd('-', fd);
       n *= -1;
    }
    if(n > 9)
    {
        ft_putnbr_fd( n / 10 , fd);
        ft_putnbr_fd(n % 10 , fd);
    }
    else
        ft_putchar_fd(n + 48 , fd);
}
// int main ()
// {
//     ft_putnbr_fd(-2147483648, 1);∆
// }