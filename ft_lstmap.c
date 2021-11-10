/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:44:04 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 18:52:21 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		if (f(lst->content))
		{
			temp = ft_lstnew(lst->content);
			if (temp == NULL)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			if (new_lst == NULL)
				new_lst = temp;
			else
				temp->next = temp;
			new_lst = new_lst->next;
		}
		lst = lst->next;
	}
	return (new_lst);
}
