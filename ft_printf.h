/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 20:18:19 by zzirh             #+#    #+#             */
/*   Updated: 2022/01/06 20:52:59 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdio.h>

int		ft_printf(const char *format, ...);
void	ft_putch(char c, int *l);
void	ft_putst(char *s, int *l);
void	ft_putuin(unsigned int n, int *l);
void	ft_putindec(int n, int *l);
void	ft_puthex(unsigned int n, char c, int *l);
void	ft_putadd(unsigned long nb, int *l);
void	ft_printadd(void *p, int *l);
void	ft_arg(char argt, va_list x, int *l);
#endif
