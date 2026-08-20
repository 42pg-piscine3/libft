/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/21 12:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	// Step 1: edge case - if 'little' is an empty string, real strnstr
	//         returns 'big' immediately (an empty needle always
	//         matches at position 0).

	// Step 2: walk through 'big', but never start a comparison past
	//         index 'len', and never compare more of 'big' than 'len'
	//         allows even mid-comparison.

	// Step 3: at each starting position in 'big', compare it against
	//         'little' character by character (you can reuse a
	//         strncmp-like check bounded by the remaining length).

	// Step 4: return a pointer to the start of the first full match,
	//         or NULL if 'little' never fully fits within the first
	//         'len' characters of 'big'.
}
