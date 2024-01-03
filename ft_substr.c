/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:13:30 by acazizi           #+#    #+#             */
/*   Updated: 2024/01/03 17:11:53 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i ;
	size_t	l;
	char	*r;

	i = 0;
	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	if (start > l)
		return (ft_strdup(""));
	if (l - start < len)
		len = l - start;
	r = (char *)malloc(len + 1);
	if (r == NULL)
		return (NULL);
	while (i < len)
	{
		r[i] = s[start];
		start++;
		i++;
	}
	r[i] = '\0';
	return (r);
}
