/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_puts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:39:38 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/08/06 16:28:25 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putchar_fd(const char chr, int fd)
{
	write(fd, &chr, 1);
}

/*
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_print_string("-2147483648");
		return(NULL);
	}
	if (n < 0)
		n*= -1;
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
*/
void	ft_putnbr_unsig(unsigned int u, int fd)
{
	if (u > 9)
		ft_putnbr_unsig( u / 10, fd);
	ft_putchar_fd( u % 10 + '0', fd);
}
