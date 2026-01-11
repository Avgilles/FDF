/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:27:00 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/11 11:12:42 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*find)
		return ((char *)src);
	i = 0;
	while (src[i] && i < len)
	{
		j = 0;
		while (src[i + j] == find[j] && (i + j) < len)
		{
			if (find[j + 1] == '\0')
				return ((char *)&src[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
#include <bsd/string.h>


int main()
{
	char str[] = "Hello world, welcome to the universe.";
	char to_find[] = "world";
	size_t len = 15;

	char *result_ft = ft_strnstr(str, to_find, len);
	char *result_std = strnstr(str, to_find, len);

	if (result_ft != NULL)
		printf("ft_strnstr found: %s\n", result_ft);
	else
		printf("ft_strnstr did not find the substring within the limit.\n");

	if (result_std != NULL)
		printf("strnstr found: %s\n", result_std);
	else
		printf("strnstr did not find the substring within the limit.\n");
}
*/