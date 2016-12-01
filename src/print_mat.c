/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_mat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:28:57 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 14:38:24 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_math.h"

void	print_mat(t_mat *m)
{
	int		i;
	int		j;

	i = -1;
	while (++i < m->l)
	{
		j = -1;
		while (++j < m->c)
			printf(" %.5lf", m->m[i][j]);
		printf("\n");
	}
}
