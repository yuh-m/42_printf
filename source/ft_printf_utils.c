/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:12:55 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/08/06 20:15:40 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../include/ft_printf.h"

int len_unsigned (unsigned int number)
{
	size_t len;

	len = 0;
	while (number >9)
	{
		number /= 10;
		len++;
	}
	len++;
	return ((int) len);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
