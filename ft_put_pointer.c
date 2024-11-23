/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjouan <sjouan@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 08:28:56 by sjouan            #+#    #+#             */
/*   Updated: 2024/11/23 14:28:24 by sjouan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_print_pointer_for(void *p)
{
    size_t  pointer_value;
    char    buffer[16];
    char    *hex_digits;
    int     (i), (j);

    write(1, "0x", 2);
    if (p == 0)
    {
        write(1, "0", 1);
    }
    i = 0;
    pointer_value = (size_t)p;
    hex_digits = "0123456789abcdef";
    while (pointer_value > 0)
    {
        buffer[i] = hex_digits[pointer_value%16];
        pointer_value /= 16;
        i++;
    }
    j = i;
    while (j >= 0 && j--)
        write(1, &buffer[j], 1);

}
