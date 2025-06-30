/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_itoa_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:49:09 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/30 16:06:25 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

static int	ft_putnbr_len(unsigned int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		return (len + 1);
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_putstr_nbr(unsigned int n, char *str_con, size_t str_con_len)
{
	while (n > 0)
	{
		str_con[str_con_len -1] = n % 10 + 48;
		n = n / 10;
		str_con_len--;
	}
	return (str_con);
}

char	*ft_itoa_unsgined(unsigned int n)
{
	size_t	str_con_len;
	char	*str_con;

	if (n == 0)
	{
		str_con = ft_strdup("0");
		return (str_con);
	}
	str_con_len = ft_putnbr_len(n);
	str_con = malloc(sizeof(char) * str_con_len + 1);
	if (!str_con)
		return (NULL);
	ft_putstr_nbr(n, str_con, str_con_len);
	str_con[str_con_len] = '\0';
	return (str_con);
}
