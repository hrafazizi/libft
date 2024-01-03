/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:47:11 by acazizi           #+#    #+#             */
/*   Updated: 2024/01/03 17:00:04 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int a)
{
	int	i;

	i = 0;
	if (a == 0)
		return (1);
	while (a != 0)
	{
		a = a / 10;
		i++ ;
	}
	return (i);
}

char	*ft_get_string(int n, int ckeck_negative)
{
	int		len;
	int		i;
	char	*a;

	len = ft_intlen(n) + ckeck_negative;
	a = malloc(len + 1);
	if (a == NULL )
		return (NULL);
	i = len -1;
	a[0] = '-';
	while (ckeck_negative <= i)
	{
		a[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	a[len] = '\0';
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		ckeck_negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ckeck_negative = 0;
	if (n < 0)
	{
		n = n * -1;
		ckeck_negative = 1;
	}
	a = ft_get_string(n, ckeck_negative);
	return (a);
}
