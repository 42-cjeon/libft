/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:06:31 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 18:58:11 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	byte;
	char			*memory;
	size_t			i;

	byte = (unsigned char)c;
	memory = (char *)b;
	i = 0;
	while (i < len)
	{
		memory[i] = byte;
		i++;
	}
	return (b);
}
