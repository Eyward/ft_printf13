/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 22:03:56 by zzirh             #+#    #+#             */
/*   Updated: 2022/01/03 00:20:23 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuin(unsigned int n, int *l)
{
	unsigned long	nb;

	nb = n;
	if (nb < 10)
	{
		ft_putch(nb + '0', l);
	}
	else
	{
		ft_putuin(nb / 10, l);
		ft_putuin(nb % 10, l);
	}
}
