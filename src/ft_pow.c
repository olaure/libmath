/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 18:32:39 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/12 18:53:23 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

double		ft_pow(double x, int n)
{
	double	r;
	double	x2;

	if (n == 1)
		return (x);
	if (n == 2)
		return (x * x);
	x2 = x * x;
	r = x2;
	n -= 2;
	while (n > 1)
	{
		r *= x2;
		n -= 2;
	}
	return (n ? r * x : r);
}
