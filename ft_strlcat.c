/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/21 12:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	// Step 1: compute dstlen, the current length of 'dst', and srclen,
	//         the length of 'src'.

	// Step 2: edge case - if dstlen >= size, 'dst' is already full/not
	//         properly bounded: leave it untouched and return
	//         size + srclen.

	// Step 3: otherwise, figure out how much room is left to append
	//         into: (size - dstlen - 1) bytes at most.

	// Step 4: append that many characters from 'src' right after the
	//         existing content of 'dst' (starting at dst + dstlen),
	//         then null-terminate.

	// Step 5: return dstlen + srclen - the total length the string
	//         *would* have had if 'size' had been big enough.
}
