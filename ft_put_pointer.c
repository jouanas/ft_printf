/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjouan <sjouan@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 08:28:56 by sjouan            #+#    #+#             */
/*   Updated: 2024/11/29 22:54:39 by sjouan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_pointer_for(void *p, int *count)
{
	size_t	pointer_value;
	char	buffer[16];
	char	*hex_digits;
	int		i;
	int		j;

	if (p == 0)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	i = 0;
	pointer_value = (size_t)p;
	hex_digits = "0123456789abcdef";
	while (pointer_value > 0)
	{
		buffer[i] = hex_digits[pointer_value % 16];
		pointer_value /= 16;
		i++;
	}
	j = i;
	while (j >= 0 && j--)
		ft_putchar(buffer[j], count);
}
