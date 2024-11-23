/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjouan <sjouan@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:27:11 by sjouan            #+#    #+#             */
/*   Updated: 2024/11/23 14:29:52 by sjouan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void    ft_putnbr_hexa(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void    ft_print_pointer_for(void *p);
void	ft_putnbr_unsi(unsigned int n);

#endif
