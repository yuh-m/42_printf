/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:10:15 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/08/06 21:24:22 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../include/ft_printf.h"

int	ft_print_x(unsigned int number, char spec)
{
	int		bytes;
	char	*base;
	char	*hex;

	bytes = 0;
	if (!number)
	{
		bytes = ft_print_string("(nil)");
		return (bytes);
	}
	if (spec == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	hex = ft_itoa_base((unsigned long) number, base);
	bytes += ft_print_string(hex);
	free(hex);
	return (bytes);
}
