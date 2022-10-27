/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:53:33 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/17 19:37:56 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}
