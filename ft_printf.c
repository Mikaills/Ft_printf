/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:47:23 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/30 21:11:43 by bahkaya          ###   ########.fr       */
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
	
	}
	va_end(args);
	return(count);
}
