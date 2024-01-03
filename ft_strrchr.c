/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:42:35 by acazizi           #+#    #+#             */
/*   Updated: 2023/12/26 17:55:46 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	sl;

	sl = ft_strlen(s);
	while (sl + 1)
	{
		if (s[sl] == (char)c)
			return ((char *)&s[sl]);
		sl--;
	}
	return (0);
}
