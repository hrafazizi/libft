/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:53:14 by acazizi           #+#    #+#             */
/*   Updated: 2024/01/03 17:08:21 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	int		i;
	int		j;
	size_t	len_s1;
	size_t	len_s2;

	i = -1;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	r = malloc(len_s1 + len_s2 + 1);
	if (r == NULL)
		return (NULL);
	while (s1[++i] != '\0')
		r[i] = s1[i];
	while (s2[j] != '\0')
	{
		r[i] = s2[j];
		j++;
		i++;
	}
	r[i] = '\0';
	return (r);
}
