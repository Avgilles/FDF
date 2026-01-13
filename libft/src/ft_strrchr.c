/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:09:03 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/09 12:35:36 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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