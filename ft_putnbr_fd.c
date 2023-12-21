/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 23:52:05 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/21 21:10:15 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_revint(int n) //  n = 123
{
    int rev_nbr;
    int mod;
    
    rev_nbr = 0;
    while (n != 0) // 123 != 0 || 12 !=0 || 1 !=0
    {
        mod = n % 10; // mod = 123%10=3 mod =3 || mod = 12%10 = 2 mod = 2 || mod = 1%10. mod=1
        rev_nbr = (rev_nbr * 10) + mod; // (0*10) + 3 rev_nbr=3 || rev_nbr (3 *10) + 2= rev_nbr=32 || rev_nbr=(32*10)+1= rev_nbr321 Final f rev_nbr
        n = n / 10; // n = 123/10=12 n=12 || n = 12/10= 1 n=1 || n = 1/10 = 0
    }

    return rev_nbr;  // return( 321 )
}

void ft_putnbr_fd(int n, int fd)
{
    int c;
    int rev_nbr;
    int ckeck_negative;

    ckeck_negative = 0;

    if (n < 0)
    {
        n = n * -1;
        ckeck_negative = 1;
    }
    
    rev_nbr = ft_revint(n); // rev_nbr jay b = 321 
    if (ckeck_negative == 1)
        ft_putchar_fd('-', fd);
    while (rev_nbr != 0)
    {
        c = rev_nbr % 10;
        ft_putchar_fd(c + '0', fd);
        rev_nbr = rev_nbr / 10;
    }
}

int main ()
{
    ft_putnbr_fd(-2147483648, 1);
}