/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcapela <clcapela@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:41:28 by clcapela          #+#    #+#             */
/*   Updated: 2022/07/11 19:57:37 by clcapela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int aux)
{
	char		cl;
	int			signal;
	static int	i;

	i = aux;
	signal = 1;
	if (n < 0)
	{
		signal = -1;
		i += ft_putchar('-');
		aux = i;
	}
	if (n / 10)
		ft_putnbr(n / 10 * signal, aux);
	cl = 48 + n % 10 * signal;
	i += ft_putchar(cl);
	aux = i;
	return (i);
}
