/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 18:50:25 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:34:16 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"
#include "libft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += ft_print_unsigned(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (count + 1);
}
