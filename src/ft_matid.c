/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 12:42:20 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 11:48:40 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This creates an identity matrix of size d and outputs it to dest
** It will fail and return NULL if d < 1 or malloc error
** If dest is of wrong dimensions it will fail
** If dest is NULL a matrix is created
*/

t_mat	*ft_matid(int d, t_mat *dest)
{
	int		i;

	if (d < 1)
		return (NULL);
	if (dest && !(dest->l == d && dest->c == d))
		return (NULL);
	if (!dest && !(dest = ft_newmat(d, d)))
		return (NULL);
	i = -1;
	while (++i < d)
		dest->m[i][i] = 1;
	return (dest);
}
