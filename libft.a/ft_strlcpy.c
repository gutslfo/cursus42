/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:42:31 by pitran            #+#    #+#             */
/*   Updated: 2024/10/07 14:34:50 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (len + 1 < dstsize)
		ft_memcpy(dst, src, len + 1);
	else if (dstsize != 0)
		ft_memcpy(dst, src, dstsize - 1);
	return (len);
}

/*
int	main(void)
{
	char *dst = "hg";
	const char src[] = "bonjour ";
	size_t size = 5;

	printf("%zu/n", ft_strlcpy(dst, src, size));
	printf("%s\n", dst);
}
*/