/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 17:35:01 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 17:15:55 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

double		ft_exp(double x)
{
	double	r;
	double	m;
	double	d;
	int		i;
	int		s;

	s = (x > 0) ? 1 : 0;
	m = ft_pow(EXP, ABS(FLOOR(x)));
	x -= FLOOR(x);
	r = 1.0 + x;
	i = 3;
	d = x * x / 2;
	while (ABS(d / (m * r)) > EXP_PREC)
	{
		r += d;
		d *= x / i++;
	}
	return (s ? (r * m) : (r / m));
}
