/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:35:10 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/13 21:34:38 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char		temp[11];
	long long	k;
	int			is_neg;
	int			i;

	k = n;
	i = 10;
	is_neg = 0;
	if (k < 0)
	{
		k = -k;
		is_neg = 1;
	}
	temp[i--] = k % 10 + '0';
	k /= 10;
	while (k)
	{
		temp[i--] = k % 10 + '0';
		k /= 10;
	}
	if (is_neg)
		temp[i] = '-';
	else
		i += 1;
	write(fd, temp + i, 11 - i);
}
