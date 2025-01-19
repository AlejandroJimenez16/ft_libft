/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:11:29 by alejanjiga        #+#    #+#             */
/*   Updated: 2025/01/19 21:54:06 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	*create_word(char const *s, int start, int len)
{
	char	*word;

	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, &s[start], len + 1);
	return (word);
}

static int	process_word(char const *s, char c, char **arr, int *stored_words)
{
	int	start;
	int	len;
	int	i;

	i = 0;
	start = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c && len++ == 0)
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && len > 0)
		{
			arr[*stored_words] = create_word(s, start, len);
			if (!arr[*stored_words])
				return (1);
			(*stored_words)++;
			len = 0;
		}
		i++;
	}
	return (0);
}

/**
 * @brief Splits a string into substrings based on a delimiter.
 *
 * This function divides a given string into multiple substrings based on a
 * specified delimiter character. It returns an array of strings (each string
 * being a substring) and the array is terminated with a NULL pointer.
 *
 * @param s The string to be split. This is the input string that will
 * be divided into substrings.
 * @param c The character used to split the string.
 * @return A dynamically allocated array of substrings (NULL-terminated).
 */
char	**ft_split(char const *s, char c)
{
	int		num_words;
	int		stored_words;
	char	**arr;

	if (!s)
		return (NULL);
	num_words = words_count(s, c);
	arr = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	stored_words = 0;
	if (process_word(s, c, arr, &stored_words) == 1)
		return (NULL);
	arr[stored_words] = NULL;
	return (arr);
}
