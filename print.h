/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:31:10 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/30 21:03:38 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# define HEX_LOW "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

# include <stdarg.h>
# include "./ft_libft/libft.h"

int		ft_printf(const char *format, ...);
char	*ft_itoa_unsgined(unsigned int n);
int		ft_putstr(char *s);
int		ft_putchar(int c);
int		ft_print_hex_lower(unsigned long s);
int		ft_print_hex_upper(unsigned long s);
int		p_hex(void *p);

#endif