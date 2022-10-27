/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:55:01 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/25 21:44:14 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	else
	{
		i = 0;
		while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
			i++;
		j = ft_strlen(s1) - 1;
		while (j > 0 && ft_strrchr(set, s1[j]) != NULL)
			j--;
		str = ft_substr(s1, i, j - i + 1);
		return (str);
	}
}
