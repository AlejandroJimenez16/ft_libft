/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:05:42 by alejandj          #+#    #+#             */
/*   Updated: 2024/12/26 19:46:44 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *p;

    if (nmemb == 0 || size == 0) {
        return NULL;
    }
    p = malloc(nmemb * size);
    if (p == NULL) {
        return NULL;
    }
    ft_bzero(p, nmemb * size);
    return (p);
}