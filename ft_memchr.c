/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:07:10 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 00:14:58 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;
	unsigned char find_char;
	size_t i;

	str = (const unsigned char *)s;
	find_char = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == find_char)
		{
			return ((void *)str);
		}
		str++;
		i++;
	}
	return (NULL);
}