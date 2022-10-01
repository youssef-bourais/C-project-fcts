/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:56:55 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/05 21:40:58 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    char *d = (char *)dst;
    char *s = (char *)src;
    
    i = 0;
    if (!s && !d)
        return (0);
    while (i < n)
    {
        d[i] = s[i] ;
        i++;
    }
    return dst;
}