/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:48:41 by pitran            #+#    #+#             */
/*   Updated: 2024/10/12 15:48:41 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit(long n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
	{
		digit = 1;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_putitoa(long n, char *str, long size)
{
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[size] = '\0';
	while (n)
	{
		str[--size] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(long n)
{
	long	size;
	char	*string_n;

	size = ft_digit(n);
	string_n = malloc(sizeof(char) * (size + 1));
	if (!string_n)
		return (NULL);
	return (ft_putitoa(n, string_n, size));
}
/*
#include <stdio.h>

int main(void) {
	long n = 1243564;
	char *result = ft_itoa(n);
	if (result) {
		printf("%s\n", result);
		free(result); // Don't forget to free allocated memory
	}
}*/
