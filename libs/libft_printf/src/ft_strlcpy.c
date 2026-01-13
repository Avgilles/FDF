/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 12:41:58 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:33:16 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	len_src = ft_strlen((char *)src);
	if (size == 0)
		return (len_src);
	i = 0;
	while (i < size -1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}

/*
#include <bsd/string.h>

int main()
{

    char dest1[10];
    char dest1_std[10];
    size_t ret1 = ft_strlcpy(dest1, "Hello", 10);
    size_t ret1_std = strlcpy(dest1_std, "Hello", 10);
    printf("ft_strlcpy: '%s' (retour: %zu)\n", dest1, ret1);
    printf("strlcpy:    '%s' (retour: %zu)\n", dest1_std, ret1_std);
    printf("%s Test 1\n\n", (strcmp(dest1, dest1_std) == 0) ? "o" : "x");
    printf("%s Test 1\n\n", (ret1 == ret1_std) ? "o" : "x");
	return 0;
}
*/
