/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:04:14 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/14 12:00:52 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}
