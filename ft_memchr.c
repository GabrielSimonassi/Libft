/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:38:37 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/14 12:04:30 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	src;
	size_t			count;

	count = 0;
	src = (unsigned char) c;
	while (count < n)
	{
		if (*(unsigned char *)str == src)
			return ((void *)str);
		str++;
		count++;
	}
	return (0);
}
