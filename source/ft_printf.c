/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:31:52 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/08/05 03:59:03 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "./../include/printf.h"

int ft_print_char (char chr);
int ft_print_string (char *chr);
int ft_print_integer(int number);

int	assign_print_type(char format, va_list ap)
{
	int bytes;

	bytes = 0;
	if (format == '%')
		bytes += ft_print_char('%');
	else if(format == 'c')
		bytes += ft_print_char(va_arg(ap, int));
	else if(format == 's')
		bytes += ft_print_string(va_arg(ap,char*));
	else if(format == 'i')
		bytes += ft_print_integer(va_arg(ap, int));
	/*else if(format == 'd')
		bytes += ft_print_decimal(va_arg(ap, int));
*/
	return(bytes);
}

int ft_printf(const char *format, ...)
{
	va_list	ap;
	int		bytes;

	bytes = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			bytes += assign_print_type(*format, ap);
		}
		else
			bytes += ft_print_char(*format);
		format++;
	}
	va_end(ap);
	return(bytes);
}
