/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:43:04 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 17:44:14 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	copy_reversed(char *dst, const char *src, int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		dst[n - i - 1] = src[i];
		i++;
	}
}

static int convert_reversed(int *temp, int index, int k)
{
	
}

char *ft_itoa(int n)
{
	char temp[11];
	char *result;
	int is_negtive;
	int i;
	long long k;

	k = n;
	i = 0;
	is_negtive = 0;
	if (k < 0)
	{
		is_negtive = 1;
		k = -k;
	}
	temp[i++] = k % 10 + '0';
	k /= 10;
	while (k)
	{
		temp[i++] = k % 10 + '0';
		k /= 10;
	}
	i += is_negtive;
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (result == NULL)
		return (NULL);
	result[i] = '\0';
	if (is_negtive)
	{
		result[0] = '-';
		copy_reversed(result + 1, temp, i - 1);
	}
	else
		copy_reversed(result, temp, i);
	return (result);
}