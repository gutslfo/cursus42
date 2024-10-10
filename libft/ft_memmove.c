/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:52:48 by pitran            #+#    #+#             */
/*   Updated: 2024/10/07 13:11:48 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	*temp;

	i = 0;
	dest = (unsigned char *) dst;
	source = (const unsigned char *) src;
	temp = (unsigned char *)malloc(sizeof(char) * len);
	while (i < len)
	{
		temp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dest[i] = temp[i];
		i++;
	}
	free(temp);
	return (dst);
}
