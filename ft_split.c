/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:22:41 by acazizi           #+#    #+#             */
/*   Updated: 2024/01/04 19:07:32 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countstr(char const *str, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			counter++;
			while (str[i] && str[i] != c)
				i++;
		}
		else if (str[i] == c)
			i++;
	}
	return (counter);
}

static void	ft_free_leaks(char **ptr, size_t words)
{
	while (words > 0)
	{
		words--;
		free(ptr[words]);
	}
	free (ptr);
}

static char	**ft_malloc_words(char **ptr, const char *s, char c, int num_word)
{
	size_t	i;
	int		word_start;
	int		j;

	j = 0;
	i = 0;
	while (j < num_word)
	{
		while (s[i] && s[i] == c)
			i++;
		word_start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		ptr[j] = ft_substr(s, word_start, i - word_start);
		if (ptr[j] == NULL)
		{
			ft_free_leaks(ptr, j);
			return (NULL);
		}
		j++;
	}
	ptr[j] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		nbr_of_words;
	char	**ptr;

	nbr_of_words = ft_countstr(s, c);
	ptr = (char **)malloc((nbr_of_words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr = ft_malloc_words(ptr, s, c, nbr_of_words);
	return (ptr);
}
