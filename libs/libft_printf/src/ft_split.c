/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:45:05 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:33:16 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

static void	ft_free_tab(char **result, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static	char	*get_word(const char *s, char c)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	count_word(const	char *str, char c)
{
	int		i;
	int		count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			result[i] = get_word(s, c);
			if (!result[i])
				return (ft_free_tab(result, i), NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}
