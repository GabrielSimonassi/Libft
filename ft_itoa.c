/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:16:47 by gsimonas          #+#    #+#             */
/*   Updated: 2022/08/19 14:22:22 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_ncount(int c);

static char	*ft_itoapos(int n)
{
	char	*ptr;
	int		c;

	c = ft_ncount(n);
	ptr = (char *) malloc (c * sizeof(char) + 1);
	if (!ptr)
		return (0);
	ptr[c + 1] = '\0';
	while (n > 0)
	{
		ptr[c - 1] = n % 10 + '0';
		n = n / 10;
		c--;
	}
	return (ptr);
}

static char	*ft_itoaneg(int n)
{
	char	*ptr;
	int		c;

	n = n * (-1);
	c = ft_ncount(n);
	ptr = (char *) malloc (c * sizeof(char) + 2);
	if (!ptr)
		return (0);
	ptr[0] = '-';
	ptr[c + 1] = '\0';
	while (n > 0)
	{
		ptr[c] = n % 10 + '0';
		n = n / 10;
		c--;
	}
	return (ptr);
}

static	int	ft_ncount(int c)
{
	int	count;

	count = 1;
	while (c > 9)
	{
		count++;
		c /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n > -1)
		return (ft_itoapos(n));
	else if (n < 0)
		return (ft_itoaneg(n));
	else
		return (0);
}
