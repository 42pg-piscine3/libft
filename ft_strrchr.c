/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/21 12:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	// Step 1: same '\0' subtlety as strchr - it must be considered a
	//         valid match target.

	// Step 2: unlike strchr you need the *last* match, so either scan
	//         once keeping track of the last matching position seen,
	//         or find the length first and scan backward from the end.

	// Step 3: return a pointer to the last match found, or NULL if 'c'
	//         never appears in 's'.
}
