/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:54:20 by pitran            #+#    #+#             */
/*   Updated: 2024/10/13 20:32:11 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	char			*new;
	unsigned int	n;

	size = ft_strlen(s);
	new = malloc(sizeof(char) * (size + 1));
	n = 0;
	while (n < size)
	{
		new[n] = f(n, (char)s[n]);
		n++;
	}
	new[size] = '\0';
	return (new);
}
