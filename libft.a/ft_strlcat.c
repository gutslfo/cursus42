/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:38:55 by pitran            #+#    #+#             */
/*   Updated: 2024/10/14 01:33:08 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen; 
	size_t	srclen;
	size_t	k;

	dstlen = ft_strlen(dst); /* longueur de dst */
	srclen = ft_strlen(src); /* longueur de src */
	if (dstsize <= dstlen) /* la taille du buffer est inférieure ou égale à la taille de dst : on retourne la taille  minimale nécessaire pour concaténer */
		return (dstsize + srclen);
	k = 0;
	while (src[k] && (dstlen + k < (dstsize - 1))) /* tant que src n'est pas terminée et qu'il reste de la place pour le faire */
	{
		dst[dstlen + k] = src[k]; /* concaténation */
		k++;
	}
	dst[dstlen + k] = '\0'; /* on termine la string */
	return (dstlen + srclen);
}
