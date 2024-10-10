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

void  *calloc(size_t count, size_t size)
{
	size_t	total_size = count * size;
	
	if (!str)
		return(NULL);
	char *str = (char *)malloc(size * count);
	ft_bzero(str, total_size);
	return (str)
}