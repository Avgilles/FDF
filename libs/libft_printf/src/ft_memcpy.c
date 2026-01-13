/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:19:51 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:33:16 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*s;
	char			*d;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int	main(int argc, char **argv)
{
	// void		test;
	char	c;
	char 	dest[] = "q         a";

	(void)argc;
	(void)argv;
	c = 'a';
	if (argc > 1)
	{
		printf("%s", (char *)ft_memcpy((void *)dest, (const void *)argv[1], 6));
	}
}
*/