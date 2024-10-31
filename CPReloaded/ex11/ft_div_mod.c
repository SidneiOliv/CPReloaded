/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:42:55 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/18 12:45:42 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	c;
	int	d;
	int	div;
	int	mod;

	c = 10;
	d = 3;
	ft_div_mod(c, d, &div, &mod);
	printf (" div = %d , mod = %d\n", div, mod);
}
