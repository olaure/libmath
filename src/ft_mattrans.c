/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mattrans.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:03:12 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 17:11:37 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** calculates the transposed matrix
*/

t_mat		*ft_mattrans(t_mat *m, t_mat *dst)
{
	int		i;
	int		j;
	t_mat	*mr;

	if (!(mr = ft_newmat(m->l, m->c)))
		return (NULL);
	i = -1;
	while (++i < m->l)
	{
		j = -1;
		while (++j < m->c)
			mr->m[i][j] = m->m[j][i];
	}
	if (dst && dst->l == m->l && dst->c == m->c)
	{
		ft_matcpy(mr, dst);
		ft_delmat(&mr);
		return (dst);
	}
	return (mr);
}
