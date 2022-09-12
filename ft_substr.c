/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:54:43 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/14 10:12:30 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*src;
	size_t	i;

	src = (char *)s;
	if (ft_strlen(src) <= start)
		len = 0;
	else if (start + len > ft_strlen(src))
		len = ft_strlen(src) - start;
	ptr = (char *)malloc (len * sizeof(char) + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] = src[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
