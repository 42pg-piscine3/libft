/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/21 12:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	// Step 1: cast 's' to (const unsigned char *) for byte access.

	// Step 2: loop through the first 'n' bytes, comparing each one to
	//         (unsigned char)c.

	// Step 3: return a pointer to the first matching byte as soon as
	//         you find one.

	// Step 4: if none of the 'n' bytes match, return NULL.
}
