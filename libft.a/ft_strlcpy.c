/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:42:31 by pitran            #+#    #+#             */
/*   Updated: 2024/10/14 01:17:03 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	cpylen; /* compte le nombre de caractères à copier */

	len = ft_strlen(src);
	if (dstsize == 0) /* cas particulier: pas de place pour la copie */
		return (len);
	if (len < dstsize) /* si la longueur de src est inférieure à la taille du buffer, on copie l'intégralité de src */
		cpylen = len;
	else 
		cpylen = dstsize - 1; /* sinon, on copie une partie des caractères en laissant un espace de mémoire pour '\0' */
	ft_memcpy(dst, src, cpylen);
	dst[cpylen] = '\0';
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