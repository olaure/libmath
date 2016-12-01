/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matmul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:03:00 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 17:00:09 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** Multiplies all indexes of a matrix by a constant.
*/

t_mat		*ft_matmul(t_mat *m, double c, t_mat *dst)
{
	int		i;
	int		j;
	t_mat	*mr;

	if (!m)
		return (NULL);
	if (dst && dst->l == m->l && dst->c == m->c)
		mr = dst;
	else if (!(mr = ft_newmat(m->l, m->c)))
		return (NULL);
	i = -1;
	while (++i < m->l)
	{
		j = -1;
		while (++j < m->c)
			mr->m[i][j] = m->m[i][j] * c;
	}
	return (mr);
}
