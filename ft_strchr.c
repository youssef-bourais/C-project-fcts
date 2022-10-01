/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:55:40 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/10 13:45:54 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t i;
    char *str = (char *)s;

    i = 0;
    while (str[i] != c)
    {
        if (str[i] == 0)
            return NULL;
        i ++;
    }
    return (&str[i]);
}