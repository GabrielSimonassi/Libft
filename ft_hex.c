/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:33:28 by gsimonas          #+#    #+#             */
/*   Updated: 2022/09/12 09:29:38 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_size(unsigned int num)
{
	unsigned int	count;

	count = 0;
	if (num == 0)
	{
		count = 1;
	}
	while (num > 0)
	{
		count++;
		num = num / 16;
	}
	return (count);
}

static void	ft_uphex(unsigned int n)
{
	while (n > 15)
	{
		ft_uphex(n / 16);
		n = n % 16;
	}
	ft_putchar(UPHEX[n % 16]);
}

static	void	ft_lowhex(unsigned int n)
{
	while (n > 15)
	{
		ft_lowhex(n / 16);
		n = n % 16;
	}
	ft_putchar(LOWHEX[n % 16]);
}

unsigned int	ft_hex(unsigned int n, char format)
{
	unsigned int	nbr;

	nbr = n;
	if (format == 'x')
		ft_lowhex(n);
	else if (format == 'X')
		ft_uphex(n);
	return (ft_size(nbr));
}
