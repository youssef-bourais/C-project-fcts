/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:25:24 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/11 15:15:44 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memchr(const void *s, int c, size_t n)
{
    char *str = (char *)s;
    size_t i;

    i = 0;
    while ( i < n )
    {
        if (str[i] == c )
        {
            return (&str[i]);
        }
        i ++;    
    }
    return NULL;
}
