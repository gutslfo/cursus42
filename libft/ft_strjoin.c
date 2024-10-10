/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:03:08 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 20:03:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strjoin(char const *s1, char const *s2)
{
  size_t i;
  size_t j;
  size_t join_size;
  char *join;

  join_size = ft_strlen(s1) + ft_strlen(s2);
  join = (char *)malloc(sizeof(char) * (join_size + 1));
  if (!join)
    return (NULL);
  i = -1;;
  j = 0;
  while (s1[++i])
  {
    join[i] = s1[i];
  }
  while (s2[j])
    join[i++] = s2[j++];
  join[i] = '\0';
}