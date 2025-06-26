/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:47:23 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/26 18:47:58 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "./ft_libft/libft.h"
int ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return i;
}

int ft_printf(const char *format,...)
{
	va_list args;
	va_start (args, format);

	int i;
	int count;
	i = 0;
	int sign = '%';
	while (format[i])
	{
		if (format[i] == sign && format[i + 1] == 's')
		{
			count += ft_putstr(va_arg(args, char *));
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'd')
		{
			count += ft_putnbr_fd(va_arg(args, ));
			i += 2;
		}
	}
	va_end(args);
	return(count);
}
int main()
{
	int x = 1234;
	ft_printf("%d", x);
}