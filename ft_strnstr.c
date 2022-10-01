/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:11:05 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/14 12:01:54 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if ((ft_strlen(little) == 0 && len == 0) || big == little || ft_strlen(little) == 0)
    {
        return ((char *)big);
    }

    if (ft_strlen(little) == len || len == 0 || ft_strlen(big) < ft_strlen(little)  )
    {
        return NULL;
    }
    
    i = 0;
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (little[j] == big[i + j] && i + j < len)
        {
            if (ft_strlen(little) == j + 1)
            {
                return ((char *)big + i);
            }
            j ++;
        }
        i ++;
    }
    return 0;
}
