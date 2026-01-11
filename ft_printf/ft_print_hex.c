/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:51:19 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/10 17:40:47 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putnbr_hex(unsigned int n, const char *base)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_hex(n / 16, base);
	c = base[n % 16];
	write(1, &c, 1);
	return (count + 1);
}
