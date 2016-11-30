/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hvec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 12:44:32 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/11 12:46:50 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec		*ft_hvec(double x, double y, double z)
{
	t_vec	*vr;

	if (!(vr = ft_newvec(4)))
		return (NULL);
	vr->v[0] = x;
	vr->v[1] = y;
	vr->v[2] = z;
	vr->v[3] = 1;
	return (vr);
}
