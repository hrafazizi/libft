/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 23:41:32 by acazizi           #+#    #+#             */
/*   Updated: 2024/01/03 17:08:29 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// dstsize: cha7l f ram
//dst hiya dak chi li3mr f ram
// src dak chi libghi i7ot 
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	r;
	size_t	t;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
	{
		return (src_len + dstsize);
	}
	r = dstsize - ft_strlen(dst);
	while (src[i] != '\0' && i + 1 < r)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	t = ft_strlen(src) - i;
	t = t + ft_strlen(dst);
	return (t);
}
