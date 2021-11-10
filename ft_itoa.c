/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:43:04 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 18:39:08 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	copy_reversed(char *dst, const char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dst[n - i - 1] = src[i];
		i++;
	}
}

static int	convert_reversed(char *temp, int k, int is_neg)
{
	int	len;

	len = 0;
	if (is_neg)
	{
		temp[len++] = '0' - (k % 10);
		k = -(k / 10);
	}
	else
	{
		temp[len++] = k % 10 + '0';
		k /= 10;
	}
	while (k)
	{
		temp[len++] = k % 10 + '0';
		k /= 10;
	}
	return (len + is_neg);
}

char	*ft_itoa(int n)
{
	char	temp[10];
	char	*result;
	int		is_neg;
	int		len;

	is_neg = 0;
	if (n < 0)
		is_neg = 1;
	len = convert_reversed(temp, n, is_neg);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (is_neg)
	{
		result[0] = '-';
		copy_reversed(result + 1, temp, len - 1);
	}
	else
		copy_reversed(result, temp, len);
	return (result);
}
