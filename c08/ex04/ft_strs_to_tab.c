/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zridoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:50:22 by zridoine          #+#    #+#             */
/*   Updated: 2025/08/06 10:09:39 by zridoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i])
		i++;
	copy = malloc((sizeof(char) * i) + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*dock;
	int			i;

	i = 0;
	dock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!dock)
		return (NULL);
	while (i < ac)
	{
		dock[i].size = ft_strlen(av[i]);
		dock[i].str = av[i];
		dock[i].copy = ft_strdup(av[i]);
		i++;
	}
	dock[i].str = 0;
	return (dock);
}
