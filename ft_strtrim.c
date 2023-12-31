/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:14:39 by acazizi           #+#    #+#             */
/*   Updated: 2024/01/04 01:08:58 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		len;
	char		*str;

	start = 0;
	if (!s1 || !set)
		return (0);
	if (!*set)
		return (ft_strdup(s1));
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
	{
		start++;
	}
	len = ft_strlen(s1);
	while (len > start && ft_strchr(set, s1[len]))
		len--;
	str = ft_substr(s1, start, len - start + 1);
	return (str);
}
