/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zridoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:39:25 by zridoine          #+#    #+#             */
/*   Updated: 2025/07/28 20:12:30 by zridoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	n;
	int	result;
	int	sign;

	n = 0;
	result = 0;
	sign = 1;
	while (str[n] == ' ' || (str[n] >= '\t' && str[n] <= '\r'))
		n++;
	while (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			sign *= -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		result = result * 10 + ((str[n]) - '0');
		n++;
	}
	return (result * sign);
}
