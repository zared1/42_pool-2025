/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zridoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:06:37 by zridoine          #+#    #+#             */
/*   Updated: 2025/08/02 13:10:52 by zridoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ac;
	int	j;

	ac = 1;
	j = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (ac < power)
	{
		nb = nb * j;
		ac++;
	}
	return (nb);
}
