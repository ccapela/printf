/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcapela <clcapela@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:10:14 by clcapela          #+#    #+#             */
/*   Updated: 2022/07/11 19:58:34 by clcapela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_p(unsigned long n, int aux)
{
	char		cl;
	static int	i;

	i = aux;
	if (n / 16)
		ft_putnbr_p(n / 16, aux);
	cl = HEX_B[n % 16];
	i += ft_putchar(cl);
	aux = i;
	return (i);
}
