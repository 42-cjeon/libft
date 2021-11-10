/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:17:43 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 18:47:35 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next_node;

	node = *lst;
	if (node != NULL)
	{
		while (node)
		{
			next_node = node->next;
			del(node->content);
			free(node);
			node = next_node;
		}
	}
	*lst = NULL;
}
