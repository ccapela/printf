/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcapela <clcapela@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:00:36 by clcapela          #+#    #+#             */
/*   Updated: 2022/07/11 20:00:01 by clcapela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_x(unsigned int n, int aux)
{
	char		cl;
	static int	i;

	i = aux;
	if (n / 16)
		ft_putnbr_x(n / 16, aux);
	cl = HEX_B[n % 16];
	i += ft_putchar(cl);
	aux = i;
	return (i);
}
