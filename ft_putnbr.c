/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjouan <sjouan@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:57:02 by sjouan            #+#    #+#             */
/*   Updated: 2024/11/30 18:10:53 by sjouan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', count);
		n *= -1;
	}
	if (n < 10)
		ft_putchar(n + 48, count);
	else
	{
		ft_putnbr(n / 10, count);
		ft_putchar((n % 10) + 48, count);
	}
}
