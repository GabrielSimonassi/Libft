/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:05:10 by gsimonas          #+#    #+#             */
/*   Updated: 2022/09/12 09:30:05 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putptr(unsigned long n)
{
	while (n > 15)
	{
		ft_putptr(n / 16);
		n = n % 16;
	}
	ft_putchar(LOWHEX[n % 16]);
}

unsigned long	ft_ptr(unsigned long n)
{
	unsigned long	nbr;
	unsigned long	count;

	nbr = n;
	count = 2;
	if (nbr == 0)
		count++;
	while (nbr > 0)
	{
		count++;
		nbr = nbr / 16;
	}
	write(1, "0x", 2);
	ft_putptr(n);
	return (count);
}
