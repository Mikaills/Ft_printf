/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:47:23 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/28 15:07:52 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "print.h"

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
		if (format[i] == sign && format[i + 1] == 's')
		{
			count += ft_putstr(va_arg(args, char *));
		i += 2;
		}
		else if(format[i] == sign && format[i + 1] == sign)
		{
			count += ft_putchar(sign);
		i += 2;
		}
		else if (format[i] == sign && format[i + 1] == 'c')
		{
			count += ft_putchar(va_arg(args, int));
		i += 2;
		}
		else if (format[i] == sign && format[i + 1] == 'd')
		{
			count += ft_putstr(ft_itoa(va_arg(args, int)));
		i += 2;
		}
		else if(format[i] == sign && format[i + 1] == 'i')
		{
			count += ft_putstr(ft_itoa(va_arg(args, int)));
		i += 2;
		}
		else if(format[i] == sign && format[i + 1] == 'u')
		{
			count += ft_putstr(ft_itoa_unsgineds(va_arg(args, unsigned int)));
		i += 2;
		}
	}
	va_end(args);
	return(count);
}
int main()
{
}