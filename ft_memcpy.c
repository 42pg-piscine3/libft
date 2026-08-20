/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/21 12:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	// Step 1: edge case - if 'n' is 0, some callers pass NULL pointers;
	//         make sure you never dereference dest/src in that case.

	// Step 2: cast both 'dest' and 'src' to (unsigned char *) /
	//         (const unsigned char *) for byte-by-byte access.

	// Step 3: loop 'n' times copying src[i] into dest[i].
	//         (memcpy does NOT need to support overlapping regions -
	//         that is what memmove is for.)

	// Step 4: return the original 'dest' pointer.
}
