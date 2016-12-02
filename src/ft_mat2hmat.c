/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat2hmat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 18:21:52 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/02 18:38:27 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_mat		*ft_mat2hmat(t_mat *m, t_mat *dst)
{
	t_mat	*mr;
	int		i;
	int		j;

	if (!m)
		return (NULL);
	if (dst && dst->l == 4 && dst->c == 4)
		mr = dst;
	else if(!(mr = ft_newmat(4, 4)))
		return (NULL);
	i = -1;
	while (++i < m->l)
	{
		j = -1;
		while (++j < m->c)
			mr->m[i][j] = m->m[i][j];
	}
	mr->m[3][3] = 1;
	return (mr);
}
