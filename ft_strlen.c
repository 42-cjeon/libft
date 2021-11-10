/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:12:49 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/09 23:46:49 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t length;

	length = 0;
	while(*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}