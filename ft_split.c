/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:20:51 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 03:01:26 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	allocate_word_memory(char **ptr, size_t idx, int len)
{
	size_t	i;

	ptr[idx] = malloc(len + 1);
	if (!ptr[idx])
	{
		i = 0;
		while (i < idx)
		{
			free(ptr[i]);
			i++;
		}
		free(ptr);
		return (1);
	}
	return (0);
}

static int	fill_memory(char **ptr, const char *s, char c)
{
	size_t	idx;
	int		len;

	idx = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
		{
			len++;
		}
		if (len != 0)
		{
			if (allocate_word_memory(ptr, idx, len) == 1)
				return (1);
			ft_strlcpy(ptr[idx], s, len + 1);
			idx++;
			s += len;
		}
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	ptr = malloc((words + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	if (fill_memory(ptr, s, c) == 1)
		return (NULL);
	ptr[words] = NULL;
	return (ptr);
}
