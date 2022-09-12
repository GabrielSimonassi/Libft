/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:33:43 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/14 11:40:22 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	count;

	count = 0;
	if (!dst && !src)
		return (0);
	if ((char *)dst >= (char *)src)
	{
		while (len)
		{
			(*(char *)(dst + len - 1)) = (*(char *)(src + len - 1));
				len--;
		}
	}
	else
	{
		while (count < len)
		{
			(*(char *)(dst + count)) = (*(char *)(src + count));
				count++;
		}
	}
	return (dst);
}
