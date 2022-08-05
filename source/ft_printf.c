/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:31:52 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/08/04 23:18:07 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

//function for how it should be print depending on the argument


int ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, format);

	while (format[i])
	{
		write(1 , format, 1);
		i++;
	}
	//check for flags
	//keep running the function
	va_end(ap);

	return(i);
}
