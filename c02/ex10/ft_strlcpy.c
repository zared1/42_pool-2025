/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zridoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:06:43 by zridoine          #+#    #+#             */
/*   Updated: 2025/07/27 16:44:23 by zridoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	len;

	n = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	while (src[n] != '\0' && n < (size - 1))
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (len);
}
