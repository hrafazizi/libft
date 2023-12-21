/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:25:26 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/21 21:10:48 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_hraf(unsigned int a, char *b)
{
    printf("%u %c\n", a, *b);
}

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i;
    i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

int main()
{
    ft_striteri("achrafmadrid", &ft_hraf);
}