/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazizi <acazizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:22:41 by acazizi           #+#    #+#             */
/*   Updated: 2024/01/03 17:16:58 by acazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_create_str(char c)
{
	char	*tmp_str;

	tmp_str = malloc(2);
	if (tmp_str == NULL)
		return (NULL);
	tmp_str[0] = c;
	tmp_str[1] = '\0';
	return (tmp_str);
}

static int	ft_countstr(const char *s, char c)
{
	int	numbre_of_words;
	int	i;

	numbre_of_words = 0;
	i = 0;
	if (s == NULL || s[0] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			numbre_of_words++;
		i++;
	}
	return (numbre_of_words + 1);
}

static void	ft_assgin(int *lenght_of_word, int *word_start, int i)
{
	if (*lenght_of_word == 0)
		*word_start = i;
	(*lenght_of_word)++;
}

static int	ft_malloc_words(char **ptr, char *s, char c, size_t s_size)
{
	int		numbre_of_words;
	size_t	i;
	int		lenght_of_word;
	int		word_start;

	numbre_of_words = 0;
	lenght_of_word = 0;
	word_start = 0;
	i = -1;
	if (s_size == 0)
		return (0);
	while (++i <= s_size)
	{
		if ((s[i] == c && s[i - 1] != c) || (i == s_size))
		{
			ptr[numbre_of_words] = ft_substr(s, word_start, i - word_start);
			if (ptr[numbre_of_words] == NULL)
				return (numbre_of_words);
			lenght_of_word = 0;
			numbre_of_words++;
		}
		else if (s[i] != c)
			ft_assgin(&lenght_of_word, &word_start, i);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		nbr_of_words;
	char	**ptr;
	char	*tmp_str;
	char	*str;
	int		need_to_free;

	tmp_str = ft_create_str(c);
	if (tmp_str == NULL)
		return (0);
	str = ft_strtrim(s, tmp_str);
	free(tmp_str);
	nbr_of_words = ft_countstr(str, c);
	ptr = (char **)malloc((nbr_of_words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	need_to_free = ft_malloc_words(ptr, str, c, ft_strlen(str));
	if (need_to_free > 0)
	{
		while (need_to_free > 0)
			free (ptr[--need_to_free]);
		free (ptr);
	}
	else
		ptr[nbr_of_words] = NULL;
	return (free(str), ptr);
}
