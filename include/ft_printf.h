/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:25:32 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/08/05 04:14:17 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *format, ... );
void ft_putchar (const char chr);
int ft_print_char (char chr);
int	ft_print_string(char *chr);
int ft_print_integer(int number);

#endif
