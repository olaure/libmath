/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matmatmul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 17:02:32 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 17:05:47 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This calculates the element wise product between m1 and m2
** It stores the result in dest if it exists otherwise a matrix is created
** If the product cannot be done because of size incompatiblity
** or because the malloc failed it returns NULL
*/

t_mat		*ft_matmatmul(t_mat *m1, t_mat *m2, t_mat *dest)
{
	t_mat	*mp;
	int		i;
	int		j;

	if (m1->c != m2->c || m1->l != m2->l ||
			(dest && !(dest->l == m1->l && dest->c == m1->c)))
		return (NULL);
	if (!(mp = ft_newmat(m1->l, m1->c)))
		return (NULL);
	i = -1;
	while (++i < m1->l)
	{
		j = -1;
		while (++j < m1->c)
			mp->m[i][j] += m1->m[i][j] * m2->m[i][j];
	}
	if (!dest)
		return (mp);
	ft_matcpy(mp, dest);
	ft_delmat(&mp);
	return (dest);
}
