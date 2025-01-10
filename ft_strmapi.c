/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:11:00 by alejanjiga        #+#    #+#             */
/*   Updated: 2025/01/10 15:20:32 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    int len;
    char *result;

    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    result = (char *)malloc((len + 1) * sizeof(char));
    i = 0;
    while (s[i] != '\0')
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[len] = '\0';
    return (result);
}
