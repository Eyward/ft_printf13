/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 20:14:21 by zzirh             #+#    #+#             */
/*   Updated: 2022/01/06 21:45:20 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_arg(char argt, va_list x, int *l)
{
	if (argt == '%')
		ft_putch('%', l);
	else if (argt == 'c')
		ft_putch(va_arg(x, int), l);
	else if (argt == 's')
		ft_putst(va_arg(x, char *), l);
	else if (argt == 'i' || argt == 'd')
		ft_putindec(va_arg(x, int), l);
	else if (argt == 'u')
		ft_putuin(va_arg(x, unsigned int), l);
	else if (argt == 'x' || argt == 'X')
		ft_puthex(va_arg(x, unsigned int), argt, l);
	else if (argt == 'p')
		ft_printadd(va_arg(x, void *), l);
}

int	ft_printf(const char *format, ...)
{
	va_list	x;
	int		l;
	int		i;

	l = 0;
	i = 0;
	va_start(x, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_arg(format[i], x, &l);
		}
		else
			ft_putch(format[i], &l);
		i++;
	}
	va_end(x);
	return (l);
}
