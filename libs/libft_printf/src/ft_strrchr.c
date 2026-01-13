/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:09:03 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:33:16 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*
int main()
{
    char *str = "Hello World";
    
    printf("strchr  'o': %s\n", strchr(str, 'o'));
    printf("ft_strchr 'o': %s\n", ft_strchr(str, 'o'));
    printf("\n");
    printf("strrchr 'o': %s\n", strrchr(str, 'o'));
    printf("ft_strrchr 'o': %s\n", ft_strrchr(str, 'o'));
    
    return 0;
}
*/