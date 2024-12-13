/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:21:48 by alejanjiga        #+#    #+#             */
/*   Updated: 2024/12/13 14:50:34 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *b;

    i = 0;
    b = (unsigned char *)s;
    while(i < n)
    {
        if (b[i] == (unsigned char)c)
        {
            return (&b[i]);
        }
        i++;
    }
    return (NULL);
}