/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:47:22 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:33:16 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

void	*ft_memset(void *s, int value, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		src[i] = (unsigned char)value;
		i++;
	}
	return (s);
}
