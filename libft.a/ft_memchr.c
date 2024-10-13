/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:33:56 by pitran            #+#    #+#             */
/*   Updated: 2024/10/13 20:49:22 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt_s;

	pt_s = (unsigned char *) s;
	i = 0;
	while (i < n && pt_s[i])
	{
		if (pt_s[i] == (unsigned char)c)
			return ((unsigned char *)&pt_s[i]);
		i++;
	}
	return (NULL);
}
