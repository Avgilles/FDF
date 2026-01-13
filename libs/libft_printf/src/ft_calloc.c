/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:00:04 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:33:16 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}

/*
int	main(void)
{
	int *arr1 = (int *)ft_calloc(5, sizeof(int));
	if (arr1) {
		int all_zero = 1;
		for (int i = 0; i < 5; i++) {
			if (arr1[i] != 0) {
				all_zero = 0;
				break;
			}
		}
		printf("%s \n", all_zero ? "Good" : "Not Good");
		free(arr1);
	}
}
*/