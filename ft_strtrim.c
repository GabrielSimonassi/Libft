/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:49:57 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/09 15:05:56 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	s = (char *)s1;
	j = ft_strlen(s);
	while (s1[i])
	{
		if (ft_strchr(set, s[i]) == 0)
			break ;
		i++;
	}
	while (j > 0)
	{
		if (ft_strchr(set, s[j - 1]) == 0)
			break ;
		j--;
	}
	j = j - i;
	return (ft_substr(s, i, j));
}
