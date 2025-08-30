/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zridoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 09:16:23 by zridoine          #+#    #+#             */
/*   Updated: 2025/07/28 11:25:09 by zridoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *array)
{
	unsigned int	n;

	n = 0;
	while (array[n] != '\0')
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	test;

	i = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	test = ft_strlen(dest);
	if (len_d >= size)
		return (len_s + size);
	while (src[i] && i < (size - len_d - 1))
	{
		dest[test] = src[i];
		i++;
		test++;
	}
	dest[test] = '\0';
	return (len_s + len_d);
}
