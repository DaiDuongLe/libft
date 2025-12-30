/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:00:23 by dale              #+#    #+#             */
/*   Updated: 2025/12/30 16:00:42 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	word_count(char const *s, char c);
static int		add_word(char **words, size_t index, char const *ptr, char c);
static void		free_all(char **words, size_t ptr_count);
static int		add_words(char c, char **words, char const *s);

char	**ft_split(char const *s, char c)
{
	size_t	wordcount;
	char	**words;
	int		mem_error;

	wordcount = word_count(s, c);
	words = malloc((wordcount + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	mem_error = add_words(c, words, s);
	if (!mem_error)
		return (NULL);
	words[wordcount] = NULL;
	return (words);
}

static int	add_words(char c, char **words, char const *s)
{
	size_t	i;
	size_t	current_word;
	int		isword;

	isword = 0;
	i = 0;
	current_word = 0;
	while (s[i])
	{
		if (s[i] != c && !isword)
		{
			isword = 1;
			if (!add_word(words, current_word, &s[i], c))
			{
				free_all(words, current_word);
				return (0);
			}
			current_word++;
		}
		if (s[i] == c)
			isword = 0;
		i++;
	}
	return (1);
}

static void	free_all(char **words, size_t ptr_count)
{
	size_t	i;

	i = 0;
	while (i < ptr_count)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static size_t	word_count(char const *s, char c)
{
	int		isword;
	size_t	word_count;
	size_t	i;

	isword = 0;
	word_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && !isword)
		{
			isword = 1;
			word_count++;
		}
		if (s[i] == c)
			isword = 0;
		i++;
	}
	return (word_count);
}

static int	add_word(char **words, size_t index, char const *ptr, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (ptr[len] && ptr[len] != c)
		len++;
	words[index] = malloc(len + 1);
	if (!words[index])
		return (0);
	i = 0;
	while (i < len)
	{
		words[index][i] = ptr[i];
		i++;
	}
	words[index][len] = 0;
	return (1);
}
