/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:48:04 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/10 22:42:32 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ft_putnbr_hex_long(uintptr_t n, const char *base)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_hex_long(n / 16, base);
	c = base[n % 16];
	write(1, &c, 1);
	return (count + 1);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_putnbr_hex_long((uintptr_t) ptr, "0123456789abcdef");
	return (count);
}
