/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:15:03 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/14 11:29:11 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;
	int		c;

	i = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	ptr = (char *) malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (0);
	j = 0;
	c = 0;
	while (s1[j] != '\0')
	{
		ptr[j] = ((char *)s1)[j];
		j++;
	}
	while (s2[c] != '\0')
	{
		ptr[j] = ((char *)s2)[c];
		c++;
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}
