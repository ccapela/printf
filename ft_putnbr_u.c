/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcapela <clcapela@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:58:53 by clcapela          #+#    #+#             */
/*   Updated: 2022/07/11 19:59:10 by clcapela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n, int aux)
{
	char		cl;
	static int	i;

	i = aux;
	if (n / 10)
		ft_putnbr_u(n / 10, aux);
	cl = 48 + n % 10;
	i += ft_putchar(cl);
	aux = i;
	return (i);
}
