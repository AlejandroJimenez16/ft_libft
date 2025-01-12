/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:11:29 by alejanjiga        #+#    #+#             */
/*   Updated: 2025/01/12 18:40:15 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t num_elements_arr(char const *s, char c)
{
    size_t i;
    size_t count;
    int in_segment;

    i = 0;
    count = 0;
    in_segment = 0;
    while(s[i] != '\0')
    {
        if (s[i] == c)
        {
            if (in_segment)
            {
                in_segment = 0;
            }
        }
        else
        {
            if (!in_segment)
            {
                in_segment = 1;
                count++;
            }
        }
        i++;
    }
    return (count);
}

static void add_str_arr(char const *s, char c, char *str)
{
    
  
        
}

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    char *str;
    char **arr;
    int size_array;

    size_array = count_c(s, c);
    arr = (char **)malloc(size_array + 1 * sizeof(char *));
    if (arr == NULL)
    {
        return (NULL);
    }
    
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            
        }
        str[i] = s[i];
        i++;   
    }
}