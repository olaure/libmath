/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matdet.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 13:02:06 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 13:12:19 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** Calculates the determinant of matrix m
** If an error occurs, it returns NaN
*/

double		ft_matdet(t_mat *m)
{
	double	d;
	double	tmp;
	int		i;
	t_mat	*sm;

	if (m->l != m->c)
		return (0.0 / 0.0);
	if (m->l == 1)
		return (m->m[0][0]);
	if (!(sm = ft_newmat(m->l - 1, m->c - 1)))
		return (0.0 / 0.0);
	i = -1;
	d = 0;
	while (++i < m->l)
	{
		ft_matsubm(m, 0, i, sm);
		tmp = ft_matdet(sm);
		if (tmp != tmp)
			return (0.0 / 0.0);
		d += tmp * m->m[0][i] * (i % 2 ? -1 : 1);
	}
	ft_delmat(&sm);
	return (d);
}
