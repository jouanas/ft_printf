/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjouan <sjouan@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 08:21:37 by sjouan            #+#    #+#             */
/*   Updated: 2024/11/23 11:52:34 by sjouan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_unsi(unsigned int n, int * count)
{
	if (n < 10)
		ft_putchar(n + 48, count);
	else
	{
		ft_putnbr_unsi(n / 10, count);
		ft_putchar((n % 10) + 48, count);
	}
}