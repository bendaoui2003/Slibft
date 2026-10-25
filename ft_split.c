/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:39:44 by mbendaou          #+#    #+#             */
/*   Updated: 2026/10/25 12:05:50 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(const char *s, char c)
{
	size_t	count;
	int		in_word;
	size_t	i;

	count = 0;
	in_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			count++;
			in_word = 1;
		}
		i++;
	}
	return (count);
}

static void	free_all(char **result, size_t k)
{
	size_t	i;

	i = 0;
	while (k > i)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	fill_word(char **result, const char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[k] = ft_substr(s, start, i - start);
			if (result[k] == NULL)
			{
				free_all(result, k);
				return (0);
			}
			k++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word;

	if (s == NULL)
		return (NULL);
	word = count_word(s, c);
	result = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (result == 0)
		return (NULL);
	if (fill_word(result, s, c) == 0)
		return (NULL);
	result[word] = NULL;
	return (result);
}
