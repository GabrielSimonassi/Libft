/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:18:50 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/14 11:42:34 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count(const char *str, char c)
{
	int	word;
	int	eval;

	word = 0;
	eval = 0;
	while (*str)
	{
		if (*str != c && eval == 0)
		{	
			eval = 1;
			word++;
		}
		else if (*str == c)
			eval = 0;
		str++;
	}
	return (word);
}

static char	*tab_fill(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc (((end - start) + 1) * sizeof(char));
	if (!word)
		return (0);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**tab;

	tab = malloc((ft_count((char *)s, c) + 1) * sizeof (char *));
	if (!s || !tab)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen((char *)s)) && index >= 0)
		{
			tab[j++] = tab_fill(s, index, i);
			index = -1;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}
