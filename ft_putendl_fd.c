/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:19:34 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/18 14:21:32 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	size_t	l;

	if (!s)
		return ;
	l = ft_strlen(s);
	i = 0;
	while (i < l)
	{
		write(fd, &s[i], sizeof(s[i]));
		i++;
	}
	write(fd, "\n", 1);
}
