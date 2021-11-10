/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:06:40 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 15:33:15 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *_dst;
	const char *_src;

	if ((size_t)dst < (size_t)src)
	{
		ft_memcpy(dst, src, len);
	}
	else if ((size_t)dst > (size_t)src)
	{
		i = 0;
		_dst = (char *)dst + len - 1;
		_src = (const char *)src + len - 1;
		while (i < len)
		{
			*_dst = *_src;
			_src--;
			_dst--;
			i++;
		}
	}
	else
	{
		return (dst);
	}
	return (dst);
}
