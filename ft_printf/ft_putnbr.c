/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:28:14 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/10 22:41:42 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putnbr(long int n)
{
	char	c;
	int		count;

	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	return (count + 1);
}
