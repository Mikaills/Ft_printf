/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:31:10 by bahkaya           #+#    #+#             */
/*   Updated: 2025/07/14 13:31:12 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
#define PRINT_H

# include <stdarg.h>
# include "./ft_libft/libft.h"


# define HEX_LOW "0123456789abcdef"

# define HEX_UPPER "0123456789ABCDEF"


int		ft_printf(const char *format, ...);
char	*ft_itoa_unsgined(unsigned int n);
int		ft_putstr(char *s);
int		ft_putchar(int c);
int		ft_print_hex_lower(unsigned long s);
int		ft_print_hex_upper(unsigned long s);
int		p_hex(void *p);
int		ft_format(int format, va_list args);
int		ft_putstr_itoa(char *s);
int		ft_flags_check(const char *format);

#endif