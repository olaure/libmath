/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 11:36:40 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 11:50:42 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This applies a function with a single parameter to every element
*/

t_mat	*ft_matmap(t_mat *m, double (*f)(double el), t_mat *dest)
{
	t_mat	*mr;
	int		i;
	int		j;

	if (dest && !(dest->l == m->l && dest->c == m->c))
		return (NULL);
	if (!(mr = ft_newmat(m->l, m->c)))
		return (NULL);
	i = -1;
	while (++i < m->l)
	{
		j = -1;
		while (++j < m->c)
			mr->m[i][j] = f(m->m[i][j]);
	}
	if (!dest)
		return (mr);
	ft_matcpy(mr, dest);
	ft_delmat(&mr);
	return (dest);
}
