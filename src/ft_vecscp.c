/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecscp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 14:02:39 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/10 14:12:12 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This calculates the scalar product between the two given vectors
** If the two vectors have different dimensions the return value is Nan
*/

double	ft_vecscp(t_vec *v1, t_vec *v2)
{
	int		res;
	int		i;

	if (v1->d != v2->d)
		return (0.0 / 0.0);
	res = 0;
	i = -1;
	while (++i < v1->d)
		res += v1->v[i] * v2->v[i];
	return (res);
}
