/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/21 12:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	// Step 1: remember that 'c' can be '\0' - the terminating byte
	//         counts as part of the string for this function, so your
	//         loop condition must still check position '\0' itself.

	// Step 2: walk through 's' from the start; at each position,
	//         compare the current character to (char)c.

	// Step 3: as soon as you find a match, return a pointer to that
	//         position within 's'.

	// Step 4: if you reach the end without a match (and c wasn't
	//         '\0'), return NULL.
}
