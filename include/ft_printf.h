/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:38:41 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/08/06 21:42:29 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_print_char(char chr);
int		ft_print_string(char *chr);
int		ft_print_integer(int number);
int		ft_print_unsigned_int(unsigned int number);
int		ft_print_pointer(void *pointer);
int		ft_print_x(unsigned int number, char specifier);

char	*ft_itoa(int n);
int		len_unsigned(unsigned int number);
char	*ft_itoa_base(unsigned long long n, char *base);
size_t	ft_strlen(const char *chr);
void	ft_putchar_fd(const char chr, int fd);
void	ft_putnbr_unsig(unsigned int number, int fd);

#endif
