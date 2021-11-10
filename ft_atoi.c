/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:42:02 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 17:32:14 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((9 <= c && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	is_negtive;

	while (ft_isspace(*str))
		str++;
	is_negtive = 0;
	if (*str == '-')
	{
		is_negtive = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	result = 0;
	while (ft_isdigit(*str))
	{
		result = result * 10 - (*str - '0');
		str++;
	}
	if (is_negtive)
		return (result);
	return (-result);
}
