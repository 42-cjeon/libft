/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 23:32:47 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 19:11:45 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	length;

	length = 0;
	while (*src != '\0')
	{
		if (length + 1 < dstsize)
		{
			*dst = *src;
			dst++;
		}
		src++;
		length++;
	}
	if (dstsize != 0)
		*dst = '\0';
	return (length);
}
