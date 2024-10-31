/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:13:12 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/18 14:23:26 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	if (max <= min)
		return (0);
	else
	{
		a = (int *) malloc((max - min) * sizeof(int));
		i = 0;
		while (i < max - min)
		{
			a[i] = min + i;
			printf (" a = %d ", a[i]);
			i++;
		}
	}
	return (a);
}

int	main(void)
{
	int	mi;
	int	ma;
	int	*b;
	int	i;

	mi = 3;
	ma = 8;
	b = ft_range(mi, ma);
	i = 0;
	while (i < ma - mi)
	{
		printf (" b = %d", b[i]);
		i++;
	}
}
