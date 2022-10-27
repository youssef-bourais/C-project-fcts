/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:14:38 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/27 22:22:22 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start >= strlen(s))
		return (strdup(""));
	str = (char *)malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	else
		memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
int end(const char  *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))    
		{
			return(i + 1);
		}
		i ++;
	}
	return (0);
}
char **ft_split(char const *s, char c)
{
	size_t i;
	int j ;

	i = 0;
	while(s[i] != '\0')
	{
		while (s[i] == c )
			i ++;
		if (s[i] != '\0')
		{
			j = end(s + i, c);
			printf("|%s|\n",ft_substr(s,i,j));
			ft_split(s + i + j, c);
		}
		break;
	}
	return NULL;
}

int main()
{
	char s[]= "   abc fgjfm fgkf fhkfhxk gh,cg,a ";
	ft_split(s, ' ');
}

// int ft_nbr(const char  *s, char c)
// {
// 	size_t i;
// 	size_t nbr;

// 	nbr = 0;
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
// 		{
// 			nbr = nbr + 1;
// 		}
// 		i ++;
// 	}
// 	return nbr;
// }