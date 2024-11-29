/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjouan <sjouan@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:00:47 by sjouan            #+#    #+#             */
/*   Updated: 2024/11/23 11:46:42 by sjouan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		*count += 6;
		return ;
	}
	while (s[i])
	{
		ft_putchar(s[i], count);
		i++;
	}
}

// int main()
// {
// 	int count = 0;
// 	ft_putstr(NULL, &count);
// 	printf("\n%d\n", count);
// }
