/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:45:32 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/13 22:31:48 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h> 
# include <limits.h>
# include <stdio.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*context;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_isascii(int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *src, const char *find, size_t len);
char	*ft_strrchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int value, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_putnbr_base_fd(unsigned int n, const char *base, int fd);
int		ft_printf(const char *str, ...);
int		ft_print_unsigned(unsigned int n);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_hex(unsigned int n, const char format);
int		ft_putnbr_hex(unsigned int n, const char *base);
int		ft_print_str(const char *str);
int		ft_putnbr(long int n);
int		ft_print_char(char c);

#endif