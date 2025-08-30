/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zridoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:20:28 by zridoine          #+#    #+#             */
/*   Updated: 2025/08/03 17:59:33 by zridoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *num1, char *num2)
{
	int	n;

	n = 0;
	while (num1[n] && num2[n])
	{
		if (num1[n] == num2[n])
		{
			n++;
		}
		else
		{
			break ;
		}
	}
	return (num1[n] - num2[n]);
}

void	ft_sort_param(int argc, char **argv)
{
	char	*tmp;
	int		n;

	n = 1;
	while (n < argc - 1)
	{
		if (ft_strcmp(argv[n], argv[n + 1]) > 0)
		{
			tmp = argv[n];
			argv[n] = argv[n + 1];
			argv[n + 1] = tmp;
			n = 0;
		}
		n++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	ft_sort_param(argc, argv);
	while (n < argc)
		ft_putstr(argv[n++]);
	return (0);
}
