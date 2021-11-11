/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:07:10 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/11 14:38:46 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		find_char;

	str = s;
	find_char = (unsigned char)c;
	while (n--)
	{
		if (*str == find_char)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
