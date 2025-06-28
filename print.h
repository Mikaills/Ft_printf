/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:31:10 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/28 14:11:48 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRINT_H
# define PRINT_H

#include <stdio.h>
#include <stdarg.h>
#include "./ft_libft/libft.h"
#define	hex_low "0123456789abcdef"

int ft_putstr(char *s);
int ft_putchar(int c);
#endif