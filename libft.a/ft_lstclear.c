/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:28:48 by pitran            #+#    #+#             */
/*   Updated: 2024/10/14 19:35:18 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	
	if (!lst || !del)
		return ;
	while(*lst)
	{
		temp = *lst;
		del(temp->content);
		*lst = *lst->next;
		free(temp);
	}
	*lst = NULL;
}
