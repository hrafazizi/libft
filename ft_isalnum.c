/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:27:16 by acazizi           #+#    #+#             */
/*   Updated: 2023/11/03 15:54:57 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

#include <stdio.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"

int ft_isalnum(int c)
{

    return(ft_isalpha(c) || ft_isdigit(c));
}
int main()
{
	printf("%d", ft_isalnum(32));
}