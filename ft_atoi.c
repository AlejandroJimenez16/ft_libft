/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanjiga <alejanjiga@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:01:23 by alejandj          #+#    #+#             */
/*   Updated: 2024/12/25 18:24:41 by alejanjiga       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while(nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
    {
        i++;
    }
    if(nptr[i] == '-')
    {
        sign = -1;
    }
    if(nptr[i] == '+' || nptr[i] == '-')
    {
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
    return(result * sign);
}