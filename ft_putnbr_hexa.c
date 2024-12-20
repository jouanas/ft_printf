/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjouan <sjouan@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:59:32 by sjouan            #+#    #+#             */
/*   Updated: 2024/11/30 18:10:43 by sjouan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hexa(unsigned int n, char sp, int *count)
{
	char	*base;
	int		i;
	char	buffer[16];

	i = 0;
	if (n == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	if (sp == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	while (n > 0)
	{
		buffer[i] = base[n % 16];
		n /= 16;
		i++;
	}
	i--;
	while (i >= 0)
		ft_putchar(buffer[i--], count);
}
