/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:12:15 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/30 21:13:52 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check ft_format(int *format)
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
			count += ft_putstr(ft_itoa_unsgined(va_arg(args, unsigned int)));
		i += 2;
		}
		else if(format[i] == sign && format[i + 1] == 'x')
		{
			count += ft_print_hex_lower(va_arg(args, unsigned int));
		i += 2;
		}
		else if(format[i] == sign && format[i + 1] == 'X')
		{
			count += ft_print_hex_upper(va_arg(args, unsigned int));
		i += 2;
		}
		else if(format[i] == sign && format[i + 1] == 'p')
		{
			count += p_hex(va_arg(args, void *));
		i += 2;
		}
}
