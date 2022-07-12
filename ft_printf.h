/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcapela <clcapela@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:24:48 by clcapela          #+#    #+#             */
/*   Updated: 2022/07/11 19:55:35 by clcapela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# define HEX_M "0123456789ABCDEF"
# define HEX_B "0123456789abcdef"

int	ft_putnbr(int n, int aux);
int	ft_putchar(char c);
int	ft_putnbr_u(unsigned int n, int aux);
int	ft_putnbr_x(unsigned int n, int aux);
int	ft_putnbr_v(unsigned int n, int aux);
int	ft_putnbr_p(unsigned long n, int aux);
int	ft_putstr(char *s);
int	ft_printf(const char *ptr, ...);
#endif
