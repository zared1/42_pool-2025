/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zridoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:51:35 by zridoine          #+#    #+#             */
/*   Updated: 2025/07/30 18:58:24 by zridoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_case(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
		return (1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int	number[10];
	int	i;

	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (ft_case(nb) == 1)
		return ;
	while (nb > 0)
	{
		number[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write(1, &number[i], 1);
		i--;
	}
}
