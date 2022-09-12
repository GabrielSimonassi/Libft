/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:01:13 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/14 10:57:53 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*src;
	int		i;
	int		j;

	src = (char *)s1;
	i = ft_strlen(src) + 1;
	j = 0;
	if (i == 0)
		i = 1;
	ptr = (char *) malloc (i);
	if (!ptr)
		return (0);
	while (src[j] != '\0')
	{
		ptr[j] = src[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
