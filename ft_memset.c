/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:52:37 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/05 21:41:11 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h" 

void  *ft_memset(void *b, int c, size_t len)
{
  int i;
  char *p = (char *)b;
  i = 0;
  while(p[i] && i < (int)len)
    {
        p[i] = c;
        i++;
    }
  return(b);
}