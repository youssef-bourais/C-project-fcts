/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:56:12 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/13 22:43:15 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len)
{      
    char *dst1 = (char *)dst;
    char *src1 = (char *)src;

    if (dst1 == 0 && src1 == 0)
    {
        return 0;
    }
    if (dst1 > src1)
    {
        while (len > 0)
        {
            dst1 [len - 1] = src1[len -1];
            len --;
        }
    }
    else
        memcpy(dst1 , src1, len);
    return (dst1);
}

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100] = "lorem ipsum dolor sit amet";
    char str1[100];
    char str2[100];

    printf("%s\n",ft_memmove(str1, str,8));
    printf("%s\n",memmove(str2,str,8));
    
}