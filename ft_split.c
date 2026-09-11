/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/11 11:02:47 by joshtan          ###   ########.fr       */
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
** Step 3: scan 's' again: skip a run of delimiters, measure the
**         word that follows ('wln' characters), and ft_substr it
**         into the next array slot via the ft_addword helper.
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

/*
** Releases a NULL-terminated array of malloc'd strings: frees each
** string up to the first NULL slot, then frees the array itself.
** Used to unwind 'tab' when ft_split fails partway through filling it.
*/
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

/*
** Copies 'len' bytes starting at 'word' into the next free slot of
** 'tab' (tracked by '*pos'), advancing '*pos' on success. Returns 0
** if the ft_substr allocation fails, 1 otherwise.
*/
static int	ft_addword(char **tab, size_t *pos, char const *word, size_t len)
{
	tab[*pos] = ft_substr(word, 0, len);
	if (tab[*pos] == NULL)
		return (0);
	++(*pos);
	return (1);
}

/*
** Walks 's' once, skipping runs of the delimiter 'c' and copying
** each word in between into the next slot of 'tab' (via ft_addword).
** Returns 0 as soon as an allocation fails, 1 once every word in
** 's' has been placed.
*/
static int	ft_fill(char **tab, char const *s, char c)
{
	size_t	idx;
	size_t	pos;
	size_t	wln;

	idx = 0;
	pos = 0;
	while (s[idx] != '\0')
	{
		while (s[idx] == c)
			++idx;
		wln = 0;
		while (s[idx + wln] != '\0' && s[idx + wln] != c)
			++wln;
		if (wln > 0 && !ft_addword(tab, &pos, s + idx, wln))
			return (0);
		idx += wln;
	}
	return (1);
}

/*
** Splits 's' into an array of newly allocated words, using 'c' as
** the delimiter. Sizes the array with ft_wordcount, fills it with
** ft_fill, and cleans up with ft_freetab if any word fails to
** allocate. Returns NULL on a NULL 's' or on any allocation failure.
*/
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
