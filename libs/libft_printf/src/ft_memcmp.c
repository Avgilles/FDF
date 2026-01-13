/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:28:40 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:33:16 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*src1;
	unsigned char		*src2;
	size_t				i;

	src1 = (unsigned char *) s1;
	src2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (0);
}
