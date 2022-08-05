/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 03:26:11 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/08/05 04:00:46 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../include/printf.h"
#include <unistd.h>

int ft_print_char (char chr);

static long	convert_negative(long n, int fd)
{
	write(fd, "-", 1);
	n = n * -1;
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		digit;
	long	number;
	long	n_long;
	long	exp;

	exp = 1;
	n_long = n;
	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
		n_long = convert_negative(n_long, fd);
	number = n_long;
	while (n_long > 0)
	{
		n_long = n_long / 10;
		exp = exp * 10;
	}
	while (exp > 1)
	{
		exp = exp / 10;
		digit = number / exp;
		number = number - digit * exp;
		ft_print_char(digit + '0');
	}
}

int ft_print_integer(int number)
{
	int bytes;

	bytes = 0;
	ft_putnbr_fd(number, 1);
	return(bytes);
}
