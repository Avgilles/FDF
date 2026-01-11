/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:42:07 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/10 17:45:12 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base_fd(unsigned int n, const char *base, int fd)
{
	char	c;
	int		count;
	int		len;

	len = ft_strlen(base);
	count = 0;
	if (n >= len)
		count += ft_putnbr_hex(n / len, base);
	c = base[n % len];
	write(fd, &c, 1);
	return (count + 1);
}
