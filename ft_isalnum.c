/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:27:16 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/02 22:29:30 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1 )
		return (1);
	return (0);
}

// int main(void)
// {
// 	printf("%d\n", ft_isalnum('5'));
// 	printf("%d\n", ft_isalnum('H'));
// 	printf("%d\n", ft_isalnum('.'));
// 	return (0);
// }