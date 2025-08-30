/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zridoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 09:21:52 by zridoine          #+#    #+#             */
/*   Updated: 2025/08/05 21:20:31 by zridoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char **str, int size)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
		while (str[j][i])
		{
			i++;
			count++;
		}
		j++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		i;
	char	*compstr;
	int		l;

	l = 0;
	j = 0;
	if (size == 0)
		return (compstr = malloc(1));
	compstr = malloc(ft_strlen(strs, size)
			+ (size - 1) * ft_strlen(&sep, 1) + 1);
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			compstr[l++] = strs[j][i++];
		i = 0;
		while (sep[i] && j != size - 1)
			compstr[l++] = sep[i++];
		j++;
	}
	compstr[l] = 0;
	return (compstr);
}
