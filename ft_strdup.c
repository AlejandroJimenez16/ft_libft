/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:50:58 by alejandj          #+#    #+#             */
/*   Updated: 2024/12/26 20:19:11 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *str;

    str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (str == NULL)
    {
        return (NULL);
    }
    ft_memcpy(str, s, (ft_strlen(s) + 1));
    return(str);
}