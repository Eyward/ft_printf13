/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 00:28:42 by zzirh             #+#    #+#             */
/*   Updated: 2022/01/06 19:37:09 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char c, int *l)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putch('-', l);
		nb *= -1;
	}
	if (nb < 16)
	{
		if (nb <= 9)
			ft_putch(nb + 48, l);
		else if (nb >= 10 && c == 'X')
			ft_putch((n % 10) + 'A', l);
		else if (nb >= 10 && c == 'x')
			ft_putch((nb % 10) + 'a', l);
	}
	else
	{
		ft_puthex(nb / 16, c, l);
		ft_puthex(nb % 16, c, l);
	}
}
