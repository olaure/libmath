/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 12:42:20 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 17:07:17 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This creates an identity matrix of size d and outputs it
** It will fail and return NULL if d < 1 or malloc error
** If dst exists and is of the proper size it will be set
** Otherwise a matrix is created
*/

t_mat	*ft_matid(int d, t_mat *dst)
{
	int		i;
	int		j;
	t_mat	*res;

	if (d < 1)
		return (NULL);
	if (dst && dst->l == d && dst->c == d)
		res = dst;
	else if (!(res = ft_newmat(d, d)))
		return (NULL);
	i = -1;
	while (++i < d)
	{
		j = -1;
		while (++j < d)
			res->m[i][j] = (i == j);
	}
	return (res);
}
