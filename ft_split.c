/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 04:37:48 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/26 15:01:26 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while ((s[i] != c) && (s[i + 1] != '\0'))
				i++;
			words++;
		}
		i++;
	}
	return (words);
}

static int	count_char_word(const char *s, char c, int i)
{
	int	x;

	x = 0;
	while ((s[i] != c) && (s[i] != '\0'))
	{
		s++;
		x++;
	}
	return (x);
}

static void	freefinal(char **final)
{
	int	i;

	i = 0;
	while (final[i] != NULL)
	{
		free (final[i]);
		i++;
	}
	free(final);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		word;
	int		x;

	word = -1;
	x = 0;
	final = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!final)
		return (0);
	while (++word < count_words(s, c))
	{
		while (s[x] == c)
			x++;
		final[word] = ft_substr(s, x, count_char_word(s, c, x));
		if (!final[word])
		{
			freefinal(final);
			return (0);
		}
		x = x + count_char_word(s, c, x);
	}
	final[word] = 0;
	return (final);
}
