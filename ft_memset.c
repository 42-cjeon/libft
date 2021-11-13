/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:06:31 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/11 14:45:20 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	byte;
	unsigned char	*dst;

	byte = (unsigned char)c;
	dst = b;
	while (len--)
		*dst++ = byte;
	return (b);
}
