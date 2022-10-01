/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:16:19 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/11 18:24:57 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    unsigned char *str1; 
    unsigned char *str2; 
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    
    i = 0;
    while (i < n )
    {
        if (str1[i] != str2[i])
            return(str1[i] - str2[i]);
        i ++;
    }
    return 0; 
}
