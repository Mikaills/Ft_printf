/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:47:23 by bahkaya           #+#    #+#             */
/*   Updated: 2025/07/14 13:53:27 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int ft_printf(const char *format,...)
{
	va_list args;
	va_start (args, format);

	int i;
	int count;
	i = 0;
	count = 0;
	int sign = '%';
	while (format[i])
	{
		if (format[i] == sign && format[i + 1] != ft_format(format[i + 1], args))
			return (count += ft_flags_check(format));
		if (format[i] == sign)
		{
			count += ft_format(format[i + 1], args);
			i += 2;
		}
		else if (format[i] != sign)
		{
			count += ft_putchar(format[i]);
			i += 1;
		}
	}
	va_end(args);
	return(count);
}
int ft_putstr_itoa(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	free(s);
	return (i);
}