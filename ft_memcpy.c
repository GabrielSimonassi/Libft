/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:40:32 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/07 09:54:27 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str1;

	str1 = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{		
		str1[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
