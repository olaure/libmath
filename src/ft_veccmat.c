/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veccmat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:20:00 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 13:30:01 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This outputs the cross matrix associated with a vector
** Emjk aj = Mmk
*/

t_mat		*ft_veccmat(t_vec *v)
{
	t_mat	*m;

	if (v->d != 3)
		return (NULL);
	if (!(m = ft_newmat(v->d)))
		return (NULL);
	return (m);
}
