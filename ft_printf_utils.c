/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:27:03 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/28 14:25:14 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "print.h"
/* int *ft_hex_p(void *p)
{
	unsigned char *str;
	size_t len;
	size_t i;
	int res;
	res = 0;
	i = 0;
	str = (unsigned char *)p;
	len = ft_strlen(str);
	while (i < len)
	{
		
		i++;
	}
	return (res);
} */
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

int ft_putchar(int c)
{
	int i;
	i = 1;
	write(1, &c, 1);
	return (i);
}
