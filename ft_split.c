/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:37:23 by cjeon             #+#    #+#             */
/*   Updated: 2021/11/10 14:17:59 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	_add_result(char **result, int index, const char *str, unsigned int n)
{	
	unsigned int	i;
	char			target_char;

	i = 0;
	target_char = *str;
	result[index] = (char *)malloc(sizeof(char) * (n + 1));
	if (result[index] == NULL)
		return (0);
	while (i < n - 1 && target_char)
	{
		result[index][i++] = target_char;
		target_char = str[i];
	}
	while (i < n)
		result[index][i++] = 0;
	return (1);
}

char	**_get_empty_split_array(const char *str, char c)
{
	int		i;
	int		was_split_char;
	int		length;
	char	**array;

	length = 0;
	was_split_char = 1;
	while (*str)
	{
		i = 0;
		if (c == *str)
			was_split_char = 1;
		else
		{
			if (was_split_char)
				length++;
			was_split_char = 0;
		}
		str++;
	}
	array = (char **)malloc(sizeof(char *) * (length + 1));
	if (array == NULL)
		return (NULL);
	array[length] = NULL;
	return (array);
}

int	_fill_split_array(const char *str, char c, char **result)
{
	const char	*word;
	int		len_str;
	int		index;

	index = 0;
	len_str = 0;
	while (*str)
	{
		if (*str == c)
		{
			if (len_str && !(_add_result(result, index++, word, len_str + 1)))
				return (0);
			len_str = 0;
		}
		else if (!len_str++)
			word = str;
		str++;
	}
	if (len_str && !(_add_result(result, index++, word, len_str + 1)))
		return (0);
	return (1);
}

char	**ft_split(const char *str, char c)
{
	char	**result;

	result = _get_empty_split_array(str, c);
	if (result == NULL)
		return (NULL);
	if (!(_fill_split_array(str, c, result)))
		return (NULL);
	return (result);
}