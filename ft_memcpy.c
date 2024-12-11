/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:37:55 by alejandj          #+#    #+#             */
/*   Updated: 2024/12/11 13:13:25 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Lo que se hace con (unsigned char *) es castear los punteros a unsigned char

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;

    i = 0;
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}