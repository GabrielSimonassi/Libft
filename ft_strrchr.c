/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:54:39 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/14 11:21:21 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = ft_strlen((char *)s);
	str = (char *)s + i;
	if (*str == (char)c)
		return (str);
	else
	{
		str--;
		i--;
	}
	while (i >= 0)
	{
		if (*str == (char)c)
			return (str);
		str--;
		i--;
	}
	return (0);
}
