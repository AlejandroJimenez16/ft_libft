/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:30:47 by alejandj          #+#    #+#             */
/*   Updated: 2025/01/21 17:12:03 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Safely copies a block of memory, handling overlaps.
 * 
 * This function copies `n` bytes from the source memory block `src` to the 
 * destination memory block `dest`. Unlike `memcpy`, `memmove` is designed
 * to handle overlapping memory regions safely by ensuring the data is not
 * corrupted during the copy process. It archieves this by temporarily buffering
 * the data if the source and destination regions overlap.
 * 
 * Use `memmove` when the source and destination memory regions may overlap.
 * For non-overlapping memory regions, `memcpy` is faster and should 
 * be preferred.
 * 
 * @param dest Pointer to the destination memory block where the content 
 * will be copied.
 * @param src Pointer to the source memory block to copy from.
 * @param n The number of bytes to copy.
 * @return void* A pointer to the destination memory block (`dest`).
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;
	unsigned char		temp[n];

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
	return (dest);
}
