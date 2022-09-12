/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 09:20:11 by gsimonas          #+#    #+#             */
/*   Updated: 2022/09/12 09:31:08 by gsimonas         ###   ########.fr       */
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
		num = num / 10;
	}
	return (count);
}

unsigned int	ft_utoa(unsigned int n)
{
	unsigned int	nbr;

	nbr = n;
	while (n > 9)
	{
		ft_utoa(n / 10);
		n = n % 10;
	}
	n = (n % 10) + 48;
	ft_putchar(n);
	return (ft_size(nbr));
}
