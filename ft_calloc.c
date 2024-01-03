/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:59:45 by acazizi           #+#    #+#             */
/*   Updated: 2024/01/03 16:59:27 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main ()
// {
//     size_t count = 4;
//     size_t size  = sizeof(char);
//     char *r;
//     r = ft_calloc(count, size);

//     int i;
//     i = 0;
//     char *s = "ach";
//     while (s[i])
//     {
//        r[i] = s[i];
//        i++;
//     }
//     i = 0;
//      while(r[i])
//     {
//         printf("%c\n", r[i]);
//         i++;
//     }
//     return(0);
// }