/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:12:13 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 19:10:11 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_length;

	dst_length = 0;
	while (*dst != '\0' && dst_length < dstsize)
	{
		dst++;
		dst_length++;
	}
	if (dst_length == dstsize)
		return (dst_length + ft_strlen(src));
	return (dst_length + ft_strlcpy(dst, src, dstsize - dst_length));
}
