/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjouan <sjouan@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:23:30 by sjouan            #+#    #+#             */
/*   Updated: 2024/11/30 18:09:22 by sjouan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	mini_printf(const char *str, int *count, va_list args)
{
	if (*str == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (*str == 'd')
		ft_putnbr(va_arg(args, int), count);
	else if (*str == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (*str == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (*str == 'p')
		ft_print_pointer_for(va_arg(args, void *), count);
	else if (*str == 'u')
		ft_putnbr_unsi(va_arg(args, unsigned int), count);
	else if (*str == 'x' || *str == 'X')
		ft_putnbr_hexa(va_arg(args, unsigned int), *str, count);
	else if (*str == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1) == '\0')
			return (-1);
		if (*str == '%')
		{
			str++;
			mini_printf(str, &count, args);
		}
		else
			ft_putchar(*str, &count);
		str++;
	}
	return (count);
}
