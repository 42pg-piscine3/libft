/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/21 12:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	// Step 1: unlike memcpy, this must work even when 'dest' and 'src'
	//         overlap - think about what goes wrong with a naive
	//         forward copy when dest is *inside* the src..src+n range.

	// Step 2: if dest < src, copying forward (from index 0 to n-1) is
	//         safe, because you always read ahead of what you write.

	// Step 3: if dest > src, copy backward instead (from index n-1
	//         down to 0), so you read each byte before it gets
	//         overwritten.

	// Step 4: cast to (unsigned char *) / (const unsigned char *) for
	//         the byte-by-byte moves in both directions.

	// Step 5: return the original 'dest' pointer.
}
