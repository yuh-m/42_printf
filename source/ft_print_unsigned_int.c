/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:05:12 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/08/06 21:25:15 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../include/ft_printf.h"

int	ft_print_unsigned_int(unsigned int number)
{
	int		bytes;

	ft_putnbr_unsig(number, 1);
	bytes = len_unsigned(number);
	return (bytes);
}
