/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:47:46 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 18:47:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == small[j] && i + j < len)
		{
			j++;
			if (small[j] == '/0')
				return ((char *) big + i)
		}
		i++;
	}
	return (NULL);
}