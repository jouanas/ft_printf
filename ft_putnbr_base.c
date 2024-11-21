/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjouan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:42:15 by sjouan            #+#    #+#             */
/*   Updated: 2024/11/21 13:42:19 by sjouan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return len;
}

int	is_valid_base(char *base)
{
	int i, j;

	if (ft_strlen(base) < 2)
		return 0;

	for (i = 0; base[i]; i++) {
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || base[i] == '\t')
			return 0;
		for (j = i + 1; base[j]; j++) {
			if (base[i] == base[j])
				return 0;
		}
	}
	return 1;
}

void	ft_putnbr_base(int n, char *base)
{
	int base_len;

	if (!is_valid_base(base))
		return;

	base_len = ft_strlen(base);

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= base_len)
	{
		ft_putnbr_base(n / base_len, base);
		ft_putnbr_base(n % base_len, base);
	}
	else
	{
		write(1, &base[n], 1);
	}
}

