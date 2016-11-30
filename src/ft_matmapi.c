/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:02:43 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 12:55:50 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This applies a function to every element depending on line and column
*/

t_mat	*ft_matmapi(t_mat *m, double (*f)(double el, int l, int c), t_mat *d)
{
	t_mat	*mr;
	int		i;
	int		j;

	if (d && !(d->l == m->l && d->c == m->c))
		return (NULL);
	if (!(mr = ft_newmat(m->l, m->c)))
		return (NULL);
	i = -1;
	while (++i < m->l)
	{
		j = -1;
		while (++j < m->c)
			mr->m[i][j] = f(m->m[i][j], i, j);
	}
	if (!d)
		return (mr);
	ft_matcpy(mr, d);
	ft_delmat(&mr);
	return (mr);
}
