/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:26:17 by pitran            #+#    #+#             */
/*   Updated: 2024/10/10 15:29:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
void	*memset(void *str, int c, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_bzero(void *s, size_t n);

#endif