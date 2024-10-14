/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:30:30 by pitran            #+#    #+#             */
/*   Updated: 2024/10/14 17:49:21 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));
	if (!result)
		return (NULL);
	result->content = content;
	result->next = NULL;
	return (result);
}
