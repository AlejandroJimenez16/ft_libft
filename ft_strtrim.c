/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:12:40 by alejanjiga        #+#    #+#             */
/*   Updated: 2025/01/12 18:41:09 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_in_set(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

static void obtain_start_end(int *start, int *end, char const *s1, char const *set)
{
    *start = 0;
    *end = ft_strlen(s1) - 1;
    
    while (s1[*start] != '\0' && is_in_set(s1[*start], set))
    {
        (*start)++;
    }
    while (*end > *start && is_in_set(s1[*end], set))
    {
        (*end)--;
    }
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int len;
    char *result;
    int i;

    if (!s1 || !set)
    {
        return (NULL);
    }
    obtain_start_end(&start, &end, s1, set);
    len = end - start + 1;
    result = (char *)malloc((len + 1) * sizeof(char));
    if (!result)
        return NULL; 
    i = 0;
    while (i < len)
    {
        result[i] = s1[start + i];
        i++;
    }
    result[start + i] = '\0';
    return (result);    
}