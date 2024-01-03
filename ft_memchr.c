/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:40:16 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/31 20:48:42 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*r;

	i = 0;
	r = (char *)s;
	while (i < n)
	{
		if (r[i] == (char)c)
		{
			return (&r[i]);
		}
		i++;
	}
	return (NULL);
}
