/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:37:15 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/11 11:37:23 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{  

    unsigned char *str1 = (unsigned char *)s1;
    unsigned char *str2 = (unsigned char *)s2;

    size_t i;

    i = 0;
    while (i < n)
    {
        if (str1[i] == 0 && str2[i] == 0)
        {
            return (0);
        }
        if (str1[i] == 0 && str2[i] != 0)
        {
            return (str1[i] - str2[i]);
        }
        if (str1[i] != 0 && str2[i] == 0)
        {
            return (str1[i] - str2[i]);
        }
        if (str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return 0;
}