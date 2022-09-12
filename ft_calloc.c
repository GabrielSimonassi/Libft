/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:08:32 by gsimonas          #+#    #+#             */
/*   Updated: 2022/05/31 11:00:35 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*ptr;
	size_t	i;

	if (count == 0)
		count = 1;
	if (size == 0)
		size = 1;
	i = count * size;
	ptr = malloc (i);
	if (ptr == NULL )
		return (0);
	ft_memset(ptr, 0, i);
	return (ptr);
}
