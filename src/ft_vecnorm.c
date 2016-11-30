/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnorm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 17:21:20 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/10 18:12:51 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This calculates the norm of the given vector
*/

double	ft_vecnorm(t_vec *v)
{
	double	norm;
	int		i;

	norm = 0.0;
	i = -1;
	while (++i < v->d && norm > 0.0)
		norm += v->v[i] * v->v[i];
	if (norm < 0.0)
		return (0.0 / 0.0);
	return (ft_sqrt(norm));
}
