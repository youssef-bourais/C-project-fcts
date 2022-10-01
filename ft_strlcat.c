/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:23:57 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/08 15:32:09 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t Slen = ft_strlen(src);

	if ((dst == (void*)0 && size == 0) || size == 0)
		return Slen;

	size_t Dlen = ft_strlen(dst);
	size_t i;

	if (!dst && !size)
		return 0;

	if (Dlen >= size)
		return (Slen + size);

	i = 0;
	while (src[i] != '\0' && i < size - Dlen - 1)
	{
		dst [Dlen + i] = src[i];
		i ++;
	}
	dst [Dlen + i] = '\0';
	return (Slen + Dlen);	
}