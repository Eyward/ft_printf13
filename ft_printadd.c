/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 22:47:25 by zzirh             #+#    #+#             */
/*   Updated: 2022/01/03 00:00:36 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadd(unsigned long nb, int *l)
{
	if (nb < 0)
	{
		ft_putch('-', l);
		nb *= -1;
	}
	if (nb < 16)
	{
		if (nb <= 9)
			ft_putch(nb + 48, l);
		else if (nb >= 10)
			ft_putch((nb % 10) + 'a', l);
	}
	else
	{
		ft_putadd(nb / 16, l);
		ft_putadd(nb % 16, l);
	}	
}

void	ft_printadd(void *p, int *l)
{
	unsigned long	ptr;

	ptr = (unsigned long)p;
	ft_putst("0x", l);
	ft_putadd(ptr, l);
}
