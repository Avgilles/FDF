/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:45:58 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:34:16 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"
#include "libft_printf.h"

int	ft_handle_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long long)));
	else if (c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_putnbr_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_putnbr_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (c == '%')
		return (ft_print_char('%'));
	return (ft_print_char('%') + ft_print_char(c));
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	size_t	count;
	va_list	args;

	i = 0;
	count = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && (str[i + 1]))
		{
			count += ft_handle_format(str[i + 1], args);
			i++;
		}
		else
			count += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
