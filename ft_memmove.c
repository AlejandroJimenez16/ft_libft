/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:43:01 by alejandj          #+#    #+#             */
/*   Updated: 2024/12/11 13:59:00 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;
    unsigned char temp[1024];

    i = 0;
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
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