/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:01:38 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 16:02:57 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int ft_lstsize(t_list *lst)
{
	size_t len;

	len = 0;
	while(lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}