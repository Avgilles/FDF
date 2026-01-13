/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:09:03 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:33:16 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	if ((char)searchedChar == '\0')
		return ((char *)&string[i]);
	while (string[i] != '\0')
	{
		if (string[i] == (char)searchedChar)
			return ((char *)&string[i]);
		i++;
	}
	return (NULL);
}
*/
/*
int main() {

	char * source = "The C Language";
	char * destination;
	char * pointer;
	int length = ft_strlen(source);
	
	destination = (char *) malloc( sizeof( char) * (length+1) );
	ft_strcpy( destination, source );
	while ((pointer = ft_strchr( destination, 'a' ))  != NULL ) {
		*pointer = 'A';
		pointer++;
	}
	printf( "Result : %s\n", destination );
	
	free( destination );
	
	return 0;
}

*/