/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:13:20 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/13 17:49:18 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    long res = 0;
    int sign = 1;
    int i ;

    i = 0;
    while ((str[i] >= 9 && str[i] <= 13 ) || str[i] == 32)
    {
        i ++;
    }
    if (str[i] == '-' )
    {
        sign = sign * (-1);
        i ++;
    }
    else if (str[i] == '+')
    {
        i ++;
    }
    while (str[i] >= '0' && str[i] <= '9' )
    {
        
        res = res * 10 + str[i] - '0' ;
        i ++;
            if (res > 2147483647 && sign == 1)
            {
                return (-1);
            }
            if (res > 2147483648 && sign == -1)
            {
                return (0);
            }
        
    }
    return (sign * res);
}
