/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcapela <clcapela@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:16:57 by clcapela          #+#    #+#             */
/*   Updated: 2022/07/11 19:54:21 by clcapela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_aux(va_list aux, char c)
{
	int	cl;
	int	i;

	cl = 0;
	if (c == 's')
		i = ft_putstr(va_arg(aux, char *));
	else if (c == 'u')
		i = ft_putnbr_u(va_arg(aux, unsigned int), cl);
	else if (c == 'x')
		i = ft_putnbr_x(va_arg(aux, unsigned int), cl);
	else if (c == 'X')
		i = ft_putnbr_v(va_arg(aux, unsigned int), cl);
	else if (c == 'c')
		i = ft_putchar(va_arg(aux, int));
	else if (c == 'd' || c == 'i')
		i = ft_putnbr(va_arg(aux, int), cl);
	else if (c == 'p')
		i = ft_putstr("0x") + ft_putnbr_p(va_arg(aux, unsigned long), cl);
	else
		i = ft_putchar('%');
	return (i);
}

int	ft_printf(const char *ptr, ...)
{
	int		i;
	int		aux;
	va_list	argumentos;

	va_start(argumentos, ptr);
	aux = 0;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == '%')
		{
			i++;
			aux += ft_aux(argumentos, ptr[i]);
		}
		else
			aux += ft_putchar(ptr[i]);
		i++;
	}
	return (aux);
}
