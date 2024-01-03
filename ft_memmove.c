/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 21:12:34 by acazizi           #+#    #+#             */
/*   Updated: 2024/01/03 17:01:53 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dst;
	if (d == NULL && s == NULL)
		return (NULL);
	if (s > d)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (len > 0)
	{
		d[len - 1] = s[len - 1];
		len--;
	}
	return (dst);
}
