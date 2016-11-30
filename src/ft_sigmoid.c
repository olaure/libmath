/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigmoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 17:33:17 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/14 11:24:07 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

double		ft_sigmoid(double x)
{
	return (1.0 / (1.0 + ft_exp(-x)));
}

/*
** sig_prime = e(-x)*sig^2
** 			 = (sig^(-1)-1)*sig^2
** 			 = sig - sig^2
** 			 = sig * (1 - sig)
*/

double		ft_sigmoid_prime(double x)
{
	double	e;

	e = ft_sigmoid(x);
	return (e * (1 - e));
}
