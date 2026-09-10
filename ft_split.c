/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 23:30:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Step 1: count how many words 's' holds - a word is a maximal run
**         of characters that are not the delimiter 'c'.
** Step 2: ft_calloc an array of (word count + 1) char pointers, so
**         every unused slot is already NULL for cleanup and for the
**         terminating NULL.
** Step 3: scan 's' again with an 'inword' flag: on the transition
**         out of a word, ft_substr the [start, idx) range into the
**         next array slot. If the string ends while still inside a
**         word, flush that last word once the loop is done.
** Step 4: if any ft_substr fails, free every word stored so far and
**         the array itself, then return NULL.
** Step 5: return the NULL-terminated array.
*/

/*
** A new word begins on each non-delimiter met while the 'inword'
** flag is still down; a delimiter always lowers the flag. Counting
** those flag raises counts the words in a single pass.
*/
static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;
	size_t	idx;
	int		inword;

	count = 0;
	idx = 0;
	inword = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] != c && !inword)
		{
			++count;
			inword = 1;
		}
		else if (s[idx] == c)
			inword = 0;
		++idx;
	}
	return (count);
}

static void	ft_freetab(char **tab)
{
	size_t	idx;

	idx = 0;
	while (tab[idx] != NULL)
	{
		free(tab[idx]);
		++idx;
	}
	free(tab);
}

static int	ft_fill(char **tab, char const *s, char c)
{
	size_t	idx;
	size_t	start;
	size_t	pos;
	int		inword;

	idx = 0;
	start = 0;
	pos = 0;
	inword = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == c && inword)
		{
			tab[pos] = ft_substr(s, (unsigned int)start, idx - start);
			if (tab[pos] == NULL)
				return (0);
			++pos;
			inword = 0;
		}
		else if (s[idx] != c && !inword)
		{
			start = idx;
			inword = 1;
		}
		++idx;
	}
	if (inword)
	{
		tab[pos] = ft_substr(s, (unsigned int)start, idx - start);
		if (tab[pos] == NULL)
			return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)ft_calloc(ft_wordcount(s, c) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	if (ft_fill(tab, s, c) == 0)
	{
		ft_freetab(tab);
		return (NULL);
	}
	return (tab);
}
