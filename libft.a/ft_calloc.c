/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:47:25 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 18:47:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	char	*str;

	total_size = count * size;
	str = (char *)malloc(size * count);
	if (!str)
		return (NULL);
	ft_bzero(str, total_size);
	return (str);
}
