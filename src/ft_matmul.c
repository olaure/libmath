/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matmul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:03:00 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 14:23:33 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_mat		*ft_matmul(t_mat *m, double c, t_mat *dest)
{
	int		i;
	int		j;
	t_mat	*mr;

	if (dest && !(dest->l == m->l && dest->c == m->c))
		return (NULL);
	if (dest)
		mr = dest;
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
