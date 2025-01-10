/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:24:53 by alejanjiga        #+#    #+#             */
/*   Updated: 2025/01/10 15:03:37 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//NO PASA LA NORMI, MAS LINEAS QUE LAS QUE DEBERIA

int is_negative(int n)
{
    if (n < 0)
    {
        return (1);
    }
    return (0);
}

int obtain_num_digits(int n)
{
    int len;

    len = 0;
    if (n == 0)
    {
        return (1);
    }
    if (n < 0)
    {
        len++;
        n = -n;
    }
    while (n > 0)
    {
        n = n / 10;
        len++;
    }
    return (len);     
}

char *special_cases(int n)
{
    char *result;

    if (n == INT_MIN)
    {
        result = ft_strdup("-2147483648");
        return (result);
    }
    if (n == INT_MAX)
    {
        result = ft_strdup("2147483647");
        return (result);
    }
    return (NULL);
}

char *ft_itoa(int n)
{
    int len;
    char *str;
    
    char *limit_str = special_cases(n);
    if (limit_str)
        return (limit_str);
    len = obtain_num_digits(n);
    str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (is_negative(n))
    {
        str[0] = '-';
        n = - n;
    }
    while (len > 0)
    {
        if (str[len - 1] == '-')
            break;
        str[len - 1] = n % 10 + '0';
        n = n / 10;
        len--;
    }
    return (str);
}