/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:27:03 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/30 21:01:49 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar(int c)
{
	int	i;

	i = 1;
	write(1, &c, 1);
	return (i);
} 

int	ft_print_hex_lower(unsigned long s)
{
	int	len;

	len = 0;
	if (s >= 16)
	{
		len += ft_print_hex_lower(s / 16);
	}
	len += ft_putchar(HEX_LOW[s % 16]);
	return (len);
}

int	ft_print_hex_upper(unsigned long s)
{
	int	len;

	len = 0;
	if (s >= 16)
	{
		ft_print_hex_upper(s / 16);
		(len)++;
	}
	write(1, &HEX_UPPER[s % 16], 1);
	return (len);
}
int p_hex(void *p)
{
	int	i;
	unsigned long x;

	i = 0;
	x = (unsigned long)p;
	i += ft_putstr("0x");
	i += ft_print_hex_lower(x);
	return (i);
}