/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:22:12 by alejandj          #+#    #+#             */
/*   Updated: 2024/12/12 13:54:42 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Al retornar casteo el puntero para que no sea constante (char *)

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return ((char *)&s[i]);
        }
        i++;
    }
    if (c == '\0')
    {
        return ((char *)&s[i]); 
    }
    return (NULL);
}