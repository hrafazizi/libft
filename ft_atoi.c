/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 01:01:52 by acazizi           #+#    #+#             */
/*   Updated: 2024/01/04 19:12:42 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	one;

	i = 0 ;
	s = 0;
	one = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			one = -1;
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		s = (s * 10) + (str[i] - '0');
		i++;
	}
	return (s * one);
}
