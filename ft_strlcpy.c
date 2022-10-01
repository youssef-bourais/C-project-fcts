/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:43:47 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/06 19:06:35 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    char *s = (char *)src;
    int Slen = ft_strlen(s);
    size_t i;

    if(size == 0)
    {
        return Slen;
    }
    
    i = 0;
    while (i < size - 1  && src[i] != '\0') 
    {
        dst [i] = src [i];
        i ++;
    }
    dst[i] = '\0';
    return Slen;
}