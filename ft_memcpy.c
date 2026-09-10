/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/27 15:23:38 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	// Step 1: edge case - if 'n' is 0, some callers pass NULL pointers;
	//         make sure you never dereference dest/src in that case.

	// Step 2: cast both 'dest' and 'src' to (unsigned char *) /
	//         (const unsigned char *) for byte-by-byte access.

	// Step 3: loop 'n' times copying src[i] into dest[i].
	//         (memcpy does NOT need to support overlapping regions -
	//         that is what memmove is for.)

	// Step 4: return the original 'dest' pointer.
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*c_dst;
	const unsigned char	*c_src;

	if (!dest || !src)
		return (0);
	c_dst = dest;
	c_src = src;
	while (0 < n)
	{
		*c_dst = *c_src;
		c_dst++;
		c_src++;
		--n;
	}
	return (dest);
}
