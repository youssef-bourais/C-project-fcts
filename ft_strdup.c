/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:11:05 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/13 22:25:14 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char *new ;
    int i ;

    i = 0;
    if (!(new = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
        return NULL;
    while (s1[i] != '\0')
    {
        new [i] = s1[i];
        i ++;
    }
    new[i] = '\0';
    return (new);
}