/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:11:05 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/24 23:15:21 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *s, size_t len)
{
	size_t	i;
	size_t	j;

	if ((ft_strlen(s) == 0 && len == 0) || str == s)
		return ((char *)str);
	if (len == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (i + j < len && str[i + j] == s[j])
			j++;
		if (j == ft_strlen(s))
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
