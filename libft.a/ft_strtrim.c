/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 00:20:42 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 00:20:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trim;

	i = 0;
	j = ft_strlen(s1);
	if (s1 && set)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (j > i && ft_strchr(set, s1[j - 1]) && s1[j - 1])
			j--;
		trim = (char *)malloc(sizeof(char) * (j - i + 1));
		if (s1)
			ft_strlcpy(trim, &s1[i], j - i + 1);
	}
	return (trim);
}
