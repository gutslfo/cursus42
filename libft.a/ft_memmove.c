/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:52:48 by pitran            #+#    #+#             */
/*   Updated: 2024/10/14 16:48:12 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	i = 0;
	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	if (dst == src || len == 0)
		return (dst);
	if (source < dest && source + len > dest)
	{
		while(len--)
			dest[len] = source[len];
	}	
	else
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	return (dst);
}
