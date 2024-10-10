/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:07:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 15:07:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strdup(const char *s)
{
  size_t  size;

  size = ft_strlen(s);
  if (!s)
    return (NULL);
  char *dup = (char *)malloc(sizeof(char) * (size + 1));
  if (!dup)
    return (NULL);
  memcpy(dup, s, size);
  dup[size] = '\0';
  return (dup);
}

int main(void)
{
  char str[] = "Bonjour";

  printf("%s\n", ft_strdup(str));
}