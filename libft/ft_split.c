/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 01:28:27 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 01:28:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count(const char* s, char c)
{
  int  i;
  int  word;

  i = 0;
  word = 0;
  while (s[i])
  {
    while (s[i] == c)
      i++;
    if (s[i])
      word++;
    while (s[i] != c && s[i])
      i++;
  }
  return (word);
}

char  **tab(const char *s, char c)
{
  int word;
  char **split_tab;


  word = count(s, c); 
  split_tab = (char **)malloc(sizeof(char *) * (word + 1));
  if (!split_tab)
    return (NULL);
  return(split_tab);
}

char *ft_strndup(const char *str, int size)
{
  int i;
  char *dup;

  dup = (char*)malloc(sizeof(char) * (size + 1));
  if (!dup)
    return (NULL);
  i = 0;
  while (i < size)
  {
    dup[i] = str[i];
    i++;
  } 
  dup[i] = '\0';
  return (dup);
}

char  **ft_split(const char *s, char c)
{
  int start;
  int end;
  int word;
  char **split_tab;

  start = 0;
  end = 0;
  word = 0;
  split_tab = tab(s, c);
  if (!split_tab)
    return (NULL);
  while (s[end])
  {
    while (s[end] == c)
      end++;
    start = end;
    while (s[end] && s[end] != c)
      end++;
    if (end > start)
      split_tab[word++] = ft_strndup(s + start, end - start);
  }
  split_tab[word] = NULL;
  return (split_tab);
}