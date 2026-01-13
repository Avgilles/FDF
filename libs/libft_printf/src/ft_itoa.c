/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:34:47 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:33:16 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

static int	ft_intlen(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len = 1;
	if (nb < 0)
		nb = -nb;
	while (nb)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			size;
	char		*str;
	int			sign;
	int			i;
	int long	nb;

	nb = n;
	sign = (nb < 0);
	if (sign)
		nb = -nb;
	size = ft_intlen(nb) + sign;
	str = malloc(sizeof(char) * (size) + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	i = size - 1;
	while (i >= sign)
	{
		str[i] = '0' + nb % 10;
		nb = nb / 10;
		i--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
