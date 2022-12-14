/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upp_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uguyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:00:00 by uguyildi          #+#    #+#             */
/*   Updated: 2022/10/31 15:00:07 by uguyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_upp_x(unsigned int nbr, int *i)
{
	char	*a;

	a = "0123456789ABCDEF";
	if (nbr < 16)
		*i = *i + ft_putchar(a[nbr % 16]);
	if (nbr >= 16)
	{
		ft_upp_x(nbr / 16, i);
		ft_upp_x(nbr % 16, i);
	}
}
