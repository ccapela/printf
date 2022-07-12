/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_v.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcapela <clcapela@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:08:12 by clcapela          #+#    #+#             */
/*   Updated: 2022/07/11 19:59:37 by clcapela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_v(unsigned int n, int aux)
{
	char		cl;
	static int	i;

	i = aux;
	if (n / 16)
		ft_putnbr_v(n / 16, aux);
	cl = HEX_M[n % 16];
	i += ft_putchar(cl);
	aux = i;
	return (i);
}
