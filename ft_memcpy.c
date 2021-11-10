/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:06:49 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 18:56:14 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*_dst;
	const char	*_src;
	size_t		i;

	_dst = (char *)dst;
	_src = (const char *)src;
	i = 0;
	while (i < n)
	{
		*_dst = *_src;
		_dst++;
		_src++;
		i++;
	}
	return (dst);
}
