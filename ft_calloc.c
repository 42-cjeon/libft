/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:02:56 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/11 13:46:30 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated;

	if (count == 0 || size == 0)
		return (NULL);
	allocated = malloc(count * size);
	if (allocated == NULL)
		return (NULL);
	ft_memset(allocated, 0x00, count * size);
	return (allocated);
}