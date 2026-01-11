/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:33:27 by gavraam           #+#    #+#             */
/*   Updated: 2026/01/10 22:52:34 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	ft_print_unsigned(unsigned int n);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_hex(unsigned int n, const char format);
int	ft_putnbr_hex(unsigned int n, const char *base);
int	ft_print_str(const char *str);
int	ft_putnbr(long int n);
int	ft_print_char(char c);

#endif