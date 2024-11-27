/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjouan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:23:30 by sjouan            #+#    #+#             */
/*   Updated: 2024/11/20 21:23:34 by sjouan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
//static mini_printf()
int	ft_printf(const char *str, ...)
{
	int count;
	va_list args;

	count = 0;
	va_start(args, str); 
	while (*str)
	{
		if (*str == '%') 
		{
			mini_printf()
		}
		
	}
	


}