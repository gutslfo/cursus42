/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:05:58 by pitran            #+#    #+#             */
/*   Updated: 2024/10/13 21:21:08 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_pt;
	unsigned char		*src_pt;

	dest_pt = (unsigned char *) dst;
	src_pt = (unsigned char *) src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dest_pt[i] = src_pt[i];
		i++;
	}
	return (dst);
}
