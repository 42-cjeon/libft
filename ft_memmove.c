/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:06:40 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/11 14:42:26 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if ((size_t)dst < (size_t)src)
		ft_memcpy(dst, src, len);
	else if ((size_t)dst > (size_t)src)
	{
		d = (char *)dst + len - 1;
		s = (const char *)src + len - 1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
