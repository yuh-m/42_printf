/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 01:03:24 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/08/05 03:44:01 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void ft_putchar (const char chr)
{
	write(1, &chr, 1);
}

int ft_print_char (char chr)
{
	ft_putchar(chr);
	return(1); //maybe it will need to fix the return for this function
}
