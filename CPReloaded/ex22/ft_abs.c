/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:24:19 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/18 15:27:39 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"
//#define ABS(value) (value = (value < 0) ? (-value) : (value))
//#define ABS(N) ((N<0)?(-N):(N))

int	main(void)
{
	int	n;
	int	p;

	n = -1;
	p = ABS(n);
	printf (" p = %d", n);
}
