/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:12:30 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/27 19:55:30 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	else
		ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
int main()
{
	char *s = " ";
	printf("%s\n",ft_substr(s,1,0));
}