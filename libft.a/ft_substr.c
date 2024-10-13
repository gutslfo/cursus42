/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:34:15 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 19:34:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len )
{
	size_t	i;
	char	*extr;

	extr = (char *)malloc(sizeof(char) * (len + 1));
	if (!extr)
		return (NULL);
	i = 0;
	while (s[start] && start < len)
	{
		extr[i] = s[start];
		start++;
		i++;
	}
	extr[i] = '\0';
	return (0);
}
