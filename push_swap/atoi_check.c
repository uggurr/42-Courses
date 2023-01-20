/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uguyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:58:29 by uguyildi          #+#    #+#             */
/*   Updated: 2023/01/17 15:58:34 by uguyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	atoi_check(char **a)
{
	int		i;
	long	n;

	i = 0;
	while (a[i])
	{
		n = ft_atoi(a[i]);
		if (n < -2147483648 || n > 2147483647)
		{
			write (2, "Error\n", 6);
			free(a[0]);
			free(a);
			system("leaks push_swap");
			exit (0);
		}
		i++;
	}
}
