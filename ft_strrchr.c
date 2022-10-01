/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:31:54 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/10 14:17:48 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *str = (char *)s;
    size_t l = ft_strlen(str);
    int i;

    if (c == '\0')
    {
        return (str + l);
    }
    
    i = l - 1;
    while (i >= 0 && str[i] != c)
    {
        i --;
    }
    if (i == -1)
    {
        return NULL;
    }
    return (&str[i]);
}