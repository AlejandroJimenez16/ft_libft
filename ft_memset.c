/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:36:03 by alejandj          #+#    #+#             */
/*   Updated: 2024/12/10 13:31:54 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *p;
    
    i = 0;
    p = (unsigned char *)s;
    while (i < n)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return (s);
}