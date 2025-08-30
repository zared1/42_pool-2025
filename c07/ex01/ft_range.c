/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zridoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:25:56 by zridoine          #+#    #+#             */
/*   Updated: 2025/08/05 21:21:43 by zridoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		n;
	int		fark;
	int		*range;

	n = 0;
	if (min >= max)
	{
		return (0);
	}
	fark = max - min;
	range = malloc(sizeof(int) * fark);
	while (min < max)
	{
		range[n] = min;
		n++;
		min++;
	}
	return (range);
}
