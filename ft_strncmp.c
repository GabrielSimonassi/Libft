/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:12:22 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/14 11:44:59 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			res;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	res = 0;
	if (n == 0)
		return (0);
	while (*str1 && *str2 && n > 1 && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	res = *str1 - *str2;
	return (res);
}
