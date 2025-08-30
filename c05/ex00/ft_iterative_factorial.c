/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zridoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:11:10 by zridoine          #+#    #+#             */
/*   Updated: 2025/08/02 13:06:41 by zridoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = (nb - 1);
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (num > 0)
	{
		nb = nb * num;
		num--;
	}
	return (nb);
}
