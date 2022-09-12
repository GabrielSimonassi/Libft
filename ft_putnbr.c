/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:19:15 by gsimonas          #+#    #+#             */
/*   Updated: 2022/09/12 09:30:32 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_size(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (count +1);
	if (num < 0)
	{
		num = num * (-1);
		count++;
	}
	while (num > 0)
	{
		count++;
		num = num / 10;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	int	nbr;

	nbr = n;
	if (n == -2147483648)
	{	
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -1 * n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar((n % 10) + '0');
	return (ft_size(nbr));
}
