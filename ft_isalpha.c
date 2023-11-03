/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:32:08 by acazizi           #+#    #+#             */
/*   Updated: 2023/11/03 15:53:12 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >='a'&& c <='z' || c >= 'A'&& c <='Z') 
		return (1);
	return (0);
}

// int main()
// {
// 	printf("%d", ft_isalpha('A'));
// }